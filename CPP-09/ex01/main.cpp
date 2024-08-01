/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 04:32:52 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:37 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char * argv[] ) {
	if ( argc != 2 ) {
		std::cerr << "Usage: " << argv[0] << " \"OPERATION\"\n";
		return 1;
	}

	try {
		int res = RPN::ResolveExpression( argv[1] );
		std::cout << "Result: " << res << '\n';
	} catch ( std::exception & e ) {
		std::cerr << "Exception: " << e.what() << '\n';
		return 1;
	}

	return 0;
}
