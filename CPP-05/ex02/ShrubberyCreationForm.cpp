/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:28 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/01 15:31:05 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "ShrubberyCreation", REQ_SIGN_SHURBBERY, REQ_EXEC_SHURBBERY ) {
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & other ) {
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( const ShrubberyCreationForm & other ) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string & target ) : AForm( target, REQ_SIGN_SHURBBERY, REQ_EXEC_SHURBBERY ) {
}

void		ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if (!getSigned()) {
		throw ( FormNotSigned() );
	}
	if ( executor . getGrade() > getReqToExecute() ) {
		throw ( GradeTooLowException() );
	}

	std::ofstream	new_file(getName() + "_shrubbery");

	new_file << " oO    oOo     Oo    oOo       O        " << std::endl;
	new_file << "oOOo  oO|oO   oOOo    |       o|        " << std::endl;
	new_file << " \|Oo o|Oo|o   |/   o   O     \|o       " << std::endl;
	new_file << "  |/   \| Oo   |    O  o|o     |O       " << std::endl;
	new_file << "  |     |/          |   |      /        " << std::endl;
	new_file << "        |                     ||        " << std::endl;

	new_file.close();
}

/*
"
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
"
*/
