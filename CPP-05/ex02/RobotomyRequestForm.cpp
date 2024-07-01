/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:05:27 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/01 15:35:35 by ulevallo         ###   ########.fr       */
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

bool	RobotomyRequestForm::coinflip() const {
	timespec	ts;

	clock_gettime( CLOCK_REALTIME, &ts );
	srand( ts.tv_nsec );
	if ( rand() % 2 )
		return ( true );
	return ( false );
}

void		RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	hasRightsToExecute( executor );

	std::cout << "* * * Dzzz dzzz dzz dzz dzz * * *" << std::endl;

	std::string	message;

	if ( coinflip() )
		message = getName() + " has been robotomized";
	else
		message = "robotomy failed";

	std::cout << message << std::endl;
}
