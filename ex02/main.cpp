/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 05:02:14 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/22 15:57:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

Base * generate( void );
void   identify( Base * p );
void   identify( Base & p );

int	   main( int argc, char ** argv ) {
	   if ( argc > 1 && argv ) {
		   std::cerr << "Too many arguments!" << endl;
		   return ( 0 );
	   }
	   Base * c;

	   std::cout << "TEST 1" << endl;
	   std::cout << "------" << endl;
	   c = generate();

	   std::cout << endl;
	   identify( c );

	   delete ( c );

	   std::cout << "TEST 2" << endl;
	   std::cout << "------" << endl;
	   c = generate();

	   std::cout << endl;
	   identify( *c );

	   delete ( c );
	   std::cout << "TEST 3" << endl;
	   std::cout << "------" << endl;
	   c = generate();

	   std::cout << endl;
	   identify( c );
	   identify( *c );

	   delete ( c );
	   return ( EXIT_SUCCESS );
}
