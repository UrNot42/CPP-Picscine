/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:05:27 by ulevallo          #+#    #+#             */
/*   Updated: 2024/06/19 18:47:17 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm( "RobotomyRequest", REQ_SIGN_ROBOTOMY, REQ_EXEC_ROBOTOMY ) {
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & other ) {
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( const RobotomyRequestForm & other ) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm( const std::string & target ) : AForm( target, REQ_SIGN_ROBOTOMY, REQ_EXEC_ROBOTOMY ) {
}

void		RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	hasRightsToExecute( executor );
	std::cout << "* * * Dzzz dzzz dzz dzz dzz * * *"
	random thing (50)
	if ()
		std::cout << "robotomizedd"
	else
		std::cout << "robotomy fail"

}

/* "
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed."
*/
