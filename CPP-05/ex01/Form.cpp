/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:22:30 by ulevallo          #+#    #+#             */
/*   Updated: 2024/04/22 11:58:17 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name( "default" ), _signed( false ),
_reqToSign( 150 ), _reqToExecute( 150 ) {
}

Form::Form( const Form & src )
: _name( src . _name ), _signed( src . _signed ),
_reqToSign( src . _reqToSign ), _reqToExecute( src . _reqToExecute ) {
	checkGradeRange( _reqToSign );
	checkGradeRange( _reqToExecute );
}

Form::~Form() {
}

Form &	Form::operator=( const Form & rhs ) {
	this -> _signed = rhs . _signed;
	return (*this);
}

std::string	Form::getName( void ) const {
	return ( _name );
}

bool	Form::getSigned( void ) const {
	return ( _signed );
}

t_grade	Form::getReqToSign( void ) const {
	return ( _reqToSign );
}

t_grade	Form::getReqToExecute( void ) const {
	return ( _reqToExecute );
}

const char *	Form::GradeTooLowException::what( void ) const throw() {
	return ( "Grade too Low" );
}

const char *	Form::GradeTooHighException::what( void ) const throw() {
	return ( "Grade too High" );
}

const char *	Form::checkGradeRange( t_grade grade ) {
	if ( grade < 1 ) {
		throw ( Form::GradeTooHighException() );
	}
	if ( grade > 150 ) {
		throw ( Form::GradeTooLowException() );
	}
	return ( 0 );
}

std::ostream &	operator<<( std::ostream& os, const Form & obj ) {
	os << "Form infos: ";
	os << "\nname: " << obj.getName();
	os << "\nsigned: " << obj.getSigned();
	os << "\nGrade to sign: " << obj.getReqToSign();
	os << "\nGrade to execute: " << obj.getReqToExecute();
	return ( os );
}
