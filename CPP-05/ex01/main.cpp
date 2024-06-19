/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/06/19 13:09:39 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {
	Bureaucrat	steeve;
	Form		maggot;

	std::cout << "---Testing Bureaucrats grade boundaries---" << std::endl;
	try {
		steeve = Bureaucrat( "steeve mac queen", 189 );
	}
	catch ( std::exception & ex ) {
		std::cerr << ex.what() << std::endl;
	}
	try {
		steeve = Bureaucrat( "steeve mac queen", 0 );
	}
	catch ( std::exception & ex ) {
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "---Changing Bureaucrats values---" << std::endl;
	std::cout << "Default: " << std::endl;
	std::cout << steeve << std::endl;
	std::cout << "Upgrading steeve's role: " << std::endl;
	++steeve;
	std::cout << steeve << std::endl;
	std::cout << "---Testing Form signing---" << std::endl;

	steeve . signForm( maggot );
	Form A28( "I am an annoying form", 130, 15 );
	steeve . signForm( A28 );

	std::cout << "---Testing forms grade values---" << std::endl;

	try {
		Form A29( "I am an impossible form", 1, 151 );
	}
	catch( const std::exception& ex ) {
		std::cerr << ex.what() << std::endl;
	}
	try {
		Form A29( "I am an impossible form", 0, 15 );
	}
	catch( const std::exception& ex ) {
		std::cerr << ex.what() << std::endl;
	}
}
