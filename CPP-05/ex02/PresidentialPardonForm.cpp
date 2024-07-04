/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:32 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/04 11:38:49 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm( "Default_Pardon", REQ_SIGN_PRESIDENTIAL, REQ_EXEC_PRESIDENTIAL ) {
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & source ) : AForm( source.getName(), REQ_SIGN_PRESIDENTIAL, REQ_EXEC_PRESIDENTIAL ) {
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( const PresidentialPardonForm & ) {
	return ( * this );
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm( const std::string & target ) : AForm( target, REQ_SIGN_PRESIDENTIAL, REQ_EXEC_PRESIDENTIAL ) {
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	hasRightsToExecute( executor );
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
