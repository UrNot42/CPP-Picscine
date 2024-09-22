/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 23:35:31 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/21 12:20:53 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iostream>

using std::cerr;

int main( int argc, char ** argv ) {
	if ( argc != 2 || ! argv[1][0] ) {
		cerr << "Usage: ./convert <literal>" << "\n";
		return ( 1 );
	}

	// ScalarConverter b;

	// b.convert("z");
	ScalarConverter::convert( argv[1] );
	return ( 0 );
}
