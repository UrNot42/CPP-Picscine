/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:44:50 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/20 10:48:27 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <map>
#include <string>
#include <vector>

class BitcoinExchange {
	public:
		BitcoinExchange( const std::string & filename );
		void ProcessInput( const std::string & filename );

	private:
		BitcoinExchange();
		BitcoinExchange( const BitcoinExchange & rhs );

		std::map<std::string, double> data_;
		double						  GetExchangeRate( const std::string & date );
		bool						  ValidateDate( const std::string & date );
		bool						  ValidateValue( const double & value );
};

#endif
