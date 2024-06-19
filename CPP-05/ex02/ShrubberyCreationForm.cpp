/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:28 by ulevallo          #+#    #+#             */
/*   Updated: 2024/06/19 18:24:18 by ulevallo         ###   ########.fr       */
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

}

/*
"
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
"
*/
