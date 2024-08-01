/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:28 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:27:11 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "Default_Shrubbery", REQ_SIGN_SHURBBERY, REQ_EXEC_SHURBBERY ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & source ) :
	AForm( source.getName(), REQ_SIGN_SHURBBERY, REQ_EXEC_SHURBBERY ) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & ) {
	return ( *this );
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string & target ) :
	AForm( target, REQ_SIGN_SHURBBERY, REQ_EXEC_SHURBBERY ) {}

void ShrubberyCreationForm::execute( const Bureaucrat & executor ) const {
	if ( ! getSigned() ) {
		throw( FormNotSigned() );
	}
	if ( executor.getGrade() > getReqToExecute() ) {
		throw( GradeTooLowException() );
	}

	std::string	  file_name = getName() + "_shrubbery";
	std::ofstream new_file( file_name.c_str() );

	new_file << " oO    oOo     Oo    oOo             Oo       " << std::endl;
	new_file << "oOOo  oO|oO   oOOo    |          oO oOOo      " << std::endl;
	new_file << " \\|Oo o|Oo|o   |/   o   O         \\o |o       " << std::endl;
	new_file << "  |/   \\| Oo   |    O  o|o          \\oOo      " << std::endl;
	new_file << "  |     |/          |   |            /        " << std::endl;
	new_file << "        |                           ||        " << std::endl;

	new_file.close();
}

/*
"
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
"
*/
