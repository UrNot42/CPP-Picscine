/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:05:27 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:27:07 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm( "Default_Robot", REQ_SIGN_ROBOTOMY, REQ_EXEC_ROBOTOMY ) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & source ) :
	AForm( source.getName(), REQ_SIGN_ROBOTOMY, REQ_EXEC_ROBOTOMY ) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & ) {
	return ( *this );
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( const std::string & target ) :
	AForm( target, REQ_SIGN_ROBOTOMY, REQ_EXEC_ROBOTOMY ) {}

bool RobotomyRequestForm::coinflip() const {
	timespec ts;

	clock_gettime( CLOCK_REALTIME, &ts );
	srand( ts.tv_nsec );
	if ( rand() % 2 ) {
		return ( true );
	}
	return ( false );
}

void RobotomyRequestForm::execute( const Bureaucrat & executor ) const {
	hasRightsToExecute( executor );

	std::cout << "* * * Dzzz dzzz dzz dzz dzz * * *" << std::endl;

	std::cout << getName();

	if ( coinflip() ) {
		std::cout << " has been robotomized";
	} else {
		std::cout << "'s robotomy failed";
	}

	std::cout << std::endl;
}
