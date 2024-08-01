/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 05:47:19 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:11:57 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main( void ) {
	PhoneBook	super_pb;
	bool		should_exit;
	std::string str;

	should_exit = false;
	while ( ! should_exit ) {
		std::cout << "Hi! This is your Amazing PhoneBook," << std::endl;
		std::cout << "-Please provide an action (ADD/SEARCH/EXIT)" << std::endl;
		std::cout << "> " << std::flush;
		while ( ! std::getline( std::cin, str ) || ! str.size() ) {
			std::cin.clear();
			std::clearerr( stdin );
			std::cout << std::endl << "> " << std::flush;
		}
		if ( str == "EXIT" ) {
			should_exit = true;
		} else if ( str == "ADD" ) {
			super_pb.add_contact();
		} else if ( str == "SEARCH" ) {
			super_pb.search_contacts();
		}
		std::cout << std::endl;
	}
}
