/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:22:30 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:04 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name( "default" ), _signed( false ), _reqToSign( 150 ), _reqToExecute( 150 ) {}

Form::Form( const Form & src ) :
	_name( src._name ),
	_signed( src._signed ),
	_reqToSign( src._reqToSign ),
	_reqToExecute( src._reqToExecute ) {
	checkGradeRange( _reqToSign );
	checkGradeRange( _reqToExecute );
}

Form::Form( const std::string name, t_grade reqSign, t_grade reqExec ) :
	_name( name ),
	_reqToSign( reqSign ),
	_reqToExecute( reqExec ) {
	checkGradeRange( reqSign );
	checkGradeRange( reqExec );
}

Form::~Form() {}

Form & Form::operator=( const Form & rhs ) {
	this->_signed = rhs._signed;
	return ( *this );
}

std::string Form::getName( void ) const {
	return ( _name );
}

bool Form::getSigned( void ) const {
	return ( _signed );
}

t_grade Form::getReqToSign( void ) const {
	return ( _reqToSign );
}

t_grade Form::getReqToExecute( void ) const {
	return ( _reqToExecute );
}

void Form::beSigned( const Bureaucrat & obj ) {
	if ( obj.getGrade() > _reqToSign ) {
		throw( GradeTooLowException() );
	}
	_signed = true;
}

const char * Form::GradeTooLowException::what( void ) const throw() {
	return ( "Grade too Low" );
}

const char * Form::GradeTooHighException::what( void ) const throw() {
	return ( "Grade too High" );
}

void Form::checkGradeRange( t_grade grade ) {
	if ( grade < 1 ) {
		throw( GradeTooHighException() );
	}
	if ( grade > 150 ) {
		throw( GradeTooLowException() );
	}
}

std::ostream & operator<<( std::ostream & os, const Form & obj ) {
	os << "Form infos: ";
	os << "\nname: " << obj.getName();
	os << "\nsigned: " << obj.getSigned();
	os << "\nGrade to sign: " << obj.getReqToSign();
	os << "\nGrade to execute: " << obj.getReqToExecute();
	return ( os );
}
