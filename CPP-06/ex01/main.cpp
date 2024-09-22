/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:31:24 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/21 12:14:11 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <cstdlib>

int main( int argc, char ** argv ) {
	if ( argc > 1 && argv ) {
		std::cerr << "Too many arguments!" << '\n';
		return ( 1 );
	}

	data_t	  test;
	data_t *  deserialized;
	uintptr_t reinterpreted;

	test.dataStr  = std::string( "test" );
	reinterpreted = Serialization::serialize( &test );

	std::cout << "First Address = " << &test << std::endl << "str value = " << test.dataStr << std::endl;

	std::cout << std::endl;

	std::cout << "New value = " << reinterpreted << std::endl;

	std::cout << std::endl;

	deserialized = Serialization::deserialize( reinterpreted );

	std::cout << "Deserialized Address = " << deserialized << std::endl << "str value = " << deserialized->dataStr << std::endl;

	// Serialization a;
	return ( EXIT_SUCCESS );
}
