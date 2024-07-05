/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/04 13:30:40 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {
	Bureaucrat				steeve;

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
	std::cout << std::endl << "---Changing Bureaucrats values---" << std::endl;
	std::cout << "Default: " << std::endl;
	std::cout << steeve << std::endl;
	std::cout << "Upgrading steeve's role: " << std::endl;
	++steeve;
	std::cout << steeve << std::endl << std::endl;
	std::cout << "---Testing Form signing---" << std::endl;

	ShrubberyCreationForm	Shruby( "home" );
	RobotomyRequestForm		Drilll( "A hamster" );
	PresidentialPardonForm	Zaphod( "All the Dolphin" );

	ShrubberyCreationForm	Unsigned_form;

	Bureaucrat	george_0( "Emile", 148 );
	Bureaucrat	george_1( "jACK", 122 );
	Bureaucrat	george_2( "armand", 54 );
	Bureaucrat	george_3( "Ignacio", 21 );


	george_0 . signForm( Shruby );
	george_0 . signForm( Drilll );
	george_0 . signForm( Zaphod );

	std::cout << std::endl;

	george_1 . signForm( Shruby );
	george_1 . signForm( Drilll );
	george_1 . signForm( Zaphod );

	std::cout << std::endl;

	george_2 . signForm( Drilll );
	george_2 . signForm( Zaphod );

	std::cout << std::endl;

	george_3 . signForm( Zaphod );

	std::cout << std::endl << "---Testing Form Exec---" << std::endl;

	Bureaucrat	michel_0( "Eveline", 127 );
	Bureaucrat	michel_1( "CharleS", 84 );
	Bureaucrat	michel_2( "Enguerand", 34 );
	Bureaucrat	michel_3( "Marie-Baudouin", 8 );

	michel_0 . executeForm( Shruby );
	michel_0 . executeForm( Drilll );
	michel_0 . executeForm( Zaphod );

	std::cout << std::endl;

	michel_1 . executeForm( Shruby );
	michel_1 . executeForm( Drilll );
	michel_1 . executeForm( Zaphod );

	std::cout << std::endl;

	michel_2 . executeForm( Drilll );
	michel_2 . executeForm( Zaphod );

	std::cout << std::endl;

	michel_3 . executeForm( Zaphod );

	std::cout << std::endl << "---Testing for Unsigned Forms ---" << std::endl;

	michel_0 . executeForm( Unsigned_form );
	michel_1 . executeForm( Unsigned_form );
	michel_2 . executeForm( Unsigned_form );
	michel_3 . executeForm( Unsigned_form );
}
