/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:48:30 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/21 12:42:02 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

template <typename T>
void test( const T & element ) {
	std::cout << element << std::endl;
}

int main() {

	int	   intArray[] = { 1, 2, 3, 4, 5 };
	size_t intLength  = sizeof( intArray ) / sizeof( intArray[0] );
	std::cout << "Array = {1, 2, 3, 4, 5}" << std::endl;
	std::cout << "Iterating on Array:" << std::endl;
	iter( intArray, intLength, test );

	std::string strArray[] = { "Hello", "World", "Test" };
	size_t		strLength  = sizeof( strArray ) / sizeof( strArray[0] );
	std::cout << std::endl << "Array = {\"Hello\", \"World\", \"Test\"}" << std::endl;
	std::cout << "Iterating on Array:" << std::endl;
	iter( strArray, strLength, test );

	return 0;
}
