/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:40:25 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:26 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

BitcoinExchange::BitcoinExchange( const std::string & filename ) {
	std::ifstream file( filename.c_str() );
	std::string	  line;
	std::getline( file, line );

	while ( std::getline( file, line ) ) {
		std::istringstream ss( line );
		std::string		   date;
		double			   rate;

		if ( std::getline( ss, date, ',' ) && ( ss >> rate ) ) {
			data_.insert( std::make_pair( date, rate ) );
		} else {
			std::cerr << "Error: Invalid format in database => " << line << '\n';
		}
	}
}

double BitcoinExchange::GetExchangeRate( const std::string & date ) {
	std::map<std::string, double>::const_iterator it = data_.find( date );
	if ( it != data_.end() ) {
		return it->second;
	} else {
		it = data_.lower_bound( date );
		if ( it != data_.begin() ) {
			--it;
			return it->second;
		} else {
			return -1.0;
		}
	}
}

bool BitcoinExchange::ValidateDate( const std::string & date ) {
	std::istringstream ss( date );
	int				   year, month, day;
	char			   del1, del2;

	return (
		ss >> year >> del1 >> month >> del2 >> day && del1 == '-' && del2 == '-' && year >= 0 && month >= 1
		&& month <= 12 && day >= 1 && day <= 31
		&& ( ( day <= 30 && ( month != 2 ) )
			 || ( day <= 29 && ( month == 2 && ( year % 4 == 0 && ( year % 100 != 0 || year % 400 == 0 ) ) ) ) )
	);
}

bool BitcoinExchange::ValidateValue( const double & value ) {
	if ( value < 0 && value > 1000 ) {
		return false;
	}

	return true;
}

void BitcoinExchange::ProcessInput( const std::string & filename ) {
	std::ifstream file( filename.c_str() );
	std::string	  line;
	std::getline( file, line );

	while ( std::getline( file, line ) ) {
		std::istringstream ss( line );
		std::string		   date;
		double			   value;
		char			   delimiter;

		if ( ! ( ss >> date >> delimiter >> value ) || delimiter != '|' ) {
			std::cerr << "Error: Unable to parse line => " << line << '\n';
			continue;
		}

		if ( ! ValidateDate( date ) ) {
			std::cerr << "Error: Invalid date format in line => " << line << '\n';
			continue;
		}

		if ( ! ValidateValue( value ) ) {
			std::cerr << "Error: Value " << value << " is not a between 0 and 1000\n";
			continue;
		}

		double exchangeRate = GetExchangeRate( date );
		// std::cout << "ExchangeRate" << " = " << exchangeRate << '\n';

		if ( exchangeRate == -1.0 ) {
			std::cerr << "Error: No exchange rate available for date => " << date << '\n';
			continue;
		}

		std::cout << date << " => " << value << " = " << value * exchangeRate << '\n';
	}
}
