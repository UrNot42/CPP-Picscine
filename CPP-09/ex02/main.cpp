/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:39:11 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:49 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char ** argv ) {
	( void ) argc;

	std::list<int> myList;
	double		   timeList;
	sortContainer( myList, argv, timeList );
	printContainerAfter( myList );
	std::cout << "Time to sort list: " << timeList << " milliseconds" << std::endl;

	std::deque<int> myDeque;
	double			timeDeque;
	sortContainer( myDeque, argv, timeDeque );
	printContainerAfter( myDeque );
	std::cout << "Time to sort deque: " << timeDeque << " milliseconds" << std::endl;

	return 0;
}
