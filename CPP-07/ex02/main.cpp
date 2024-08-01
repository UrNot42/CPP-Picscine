/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:57:09 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:28:57 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_Array.hpp"

int main() {
	try {
		Array<int> intArray( 5 );
		for ( size_t i = 0; i < intArray.size(); ++i ) {
			intArray[i] = static_cast<int>( i );
			std::cout << intArray[i] << " ";
		}
		std::cout << std::endl;
		std::cout << intArray[5] << std::endl;
	} catch ( const std::exception & e ) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
