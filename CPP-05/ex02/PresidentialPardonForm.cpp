/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:32 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/03 13:26:38 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm( "PresidentialPardon", REQ_SIGN_PRESIDENTIAL, REQ_EXEC_PRESIDENTIAL ) {
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & ) {
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
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
