/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:47:23 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:32 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main( int argc, char * argv[] ) {
	if ( argc != 2 ) {
		std::cerr << "Error: Invalid number of arguments."
				  << "Usage: " << argv[0] << " INPUT_FILE\n";
		return 1;
	}

	BitcoinExchange exchange( "data.csv" );
	exchange.ProcessInput( argv[1] );

	return 0;
}
