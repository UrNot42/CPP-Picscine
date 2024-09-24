/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:39:11 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/24 14:26:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char ** argv ) {
	( void ) argc;

	std::list<int> myList;
	double		   timeList;
	fillContainer( myList, argv );
	printContainer( myList, "Before" );
	sortContainer( myList, timeList );
	printContainer( myList, "After" );
	std::cout << "Time to sort list: " << timeList << " milliseconds" << std::endl;

	std::deque<int> myDeque;
	double			timeDeque;
	fillContainer( myDeque, argv );
	// printContainer( myDeque, "Before" );
	sortContainer( myDeque, timeDeque );
	// printContainer( myDeque, "After" );
	std::cout << "Time to sort deque: " << timeDeque << " milliseconds" << std::endl;

	return 0;
}
