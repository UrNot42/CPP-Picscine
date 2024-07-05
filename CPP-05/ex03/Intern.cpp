/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:48:48 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/04 13:30:35 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern( const Intern & ) {
}

Intern::~Intern() {
}

Intern &	Intern::operator=( const Intern & ) {
	return ( * this );
}

AForm *	howToMakeForm1( std::string const & target ) {
	return ( new PresidentialPardonForm( target ) );
}

AForm *	howToMakeForm2( std::string const & target ) {
	return ( new RobotomyRequestForm( target ) );
}

AForm *	howToMakeForm3( std::string const & target ) {
	return ( new ShrubberyCreationForm( target ) );
}

AForm *	Intern::makeForm( std::string const & newFormName, std::string const & newFormTarget ) {

	AForm * ( * InternsBrain[] )( std::string const & target) = { &howToMakeForm1, &howToMakeForm2, &howToMakeForm3 };

	std::string formNames[] = { "presidential pardon", "robotomy request", "shrubbery creation" };

	for ( short unsigned int i = 0; i < SUM_OF_FORM_TYPES; i++ ) {
		if ( newFormName == formNames[ i ] ) {
			std::cout << "Intern creates " << newFormName << " now" << std::endl;
			return ( InternsBrain[ i ]( newFormTarget ) );
		}
	}

	std::cout << "Intern was basically too dumb to create and find: " << newFormName << std::endl;

	return ( NULL );
}


