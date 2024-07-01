/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/01 15:44:32 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {
	Bureaucrat				steeve;
	ShrubberyCreationForm	Shruby;
	RobotomyRequestForm		Drilll;
	PresidentialPardonForm	Zaphod;

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

	steeve . signForm( Shruby );

	std::cout << "---Testing forms grade values---" << std::endl;

	try {
		AForm A29( "I am an impossible form", 1, 151 );
	}
	catch( const std::exception& ex ) {
		std::cerr << ex.what() << std::endl;
	}
	try {
		AForm A29( "I am an impossible form", 0, 15 );
	}
	catch( const std::exception& ex ) {
		std::cerr << ex.what() << std::endl;
	}
}
