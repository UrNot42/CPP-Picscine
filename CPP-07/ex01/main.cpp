/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:48:30 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:28:51 by ulevallo         ###   ########.fr       */
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
	iter( intArray, intLength, test );

	std::string strArray[] = { "Hello", "World", "Test" };
	size_t		strLength  = sizeof( strArray ) / sizeof( strArray[0] );
	iter( strArray, strLength, test );

	return 0;
}
