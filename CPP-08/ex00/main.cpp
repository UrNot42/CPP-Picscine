/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:39:50 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:06 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main() {
	try {
		std::vector<int> numbers;
		numbers.push_back( 1 );
		numbers.push_back( 2 );
		numbers.push_back( 3 );
		numbers.push_back( 4 );
		numbers.push_back( 5 );
		int						   searchValue = 3;

		std::vector<int>::iterator result = easyfind( numbers, searchValue );

		std::cout << "Value " << searchValue << " found at index: " << std::distance( numbers.begin(), result )
				  << std::endl;

		std::list<int> myList;
		myList.push_back( 10 );
		myList.push_back( 20 );
		myList.push_back( 30 );
		myList.push_back( 40 );
		myList.push_back( 50 );
		searchValue = 25;

		std::list<int>::iterator result2 = easyfind( myList, searchValue );

		std::cout << "Value " << searchValue << " found at index: " << std::distance( myList.begin(), result2 )
				  << std::endl;
	} catch ( const std::out_of_range & e ) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
