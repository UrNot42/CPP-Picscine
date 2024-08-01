/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:40:43 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:51 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValidNumber( const std::string & in ) {
	if ( in.empty() || in.find_first_not_of( VALID_SET ) != std::string::npos ) {
		return false;
	}

	double			   nb;
	std::istringstream iss( in );
	iss >> nb;

	return nb >= 0 && nb <= static_cast<double>( INT_MAX );
}

bool isValidInput( char ** av ) {
	for ( int i = 1; av[i]; ++i ) {
		if ( ! isValidNumber( av[i] ) ) {
			return false;
		}
	}
	return true;
}
