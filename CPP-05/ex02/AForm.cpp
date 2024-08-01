/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:22:30 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name( "default" ), _signed( false ), _reqToSign( 150 ), _reqToExecute( 150 ) {}

AForm::AForm( const AForm & src ) :
	_name( src._name ),
	_signed( src._signed ),
	_reqToSign( src._reqToSign ),
	_reqToExecute( src._reqToExecute ) {
	checkGradeRange( _reqToSign );
	checkGradeRange( _reqToExecute );
}

AForm::AForm( const std::string name, t_grade reqSign, t_grade reqExec ) :
	_name( name ),
	_reqToSign( reqSign ),
	_reqToExecute( reqExec ) {
	checkGradeRange( reqSign );
	checkGradeRange( reqExec );
}

AForm::~AForm() {}

AForm & AForm::operator=( const AForm & rhs ) {
	this->_signed = rhs._signed;
	return ( *this );
}

std::string AForm::getName( void ) const {
	return ( _name );
}

bool AForm::getSigned( void ) const {
	return ( _signed );
}

t_grade AForm::getReqToSign( void ) const {
	return ( _reqToSign );
}

t_grade AForm::getReqToExecute( void ) const {
	return ( _reqToExecute );
}

void AForm::beSigned( const Bureaucrat & obj ) {
	if ( obj.getGrade() > _reqToSign ) {
		throw( GradeTooLowException() );
	}
	_signed = true;
}

const char * AForm::GradeTooLowException::what( void ) const throw() {
	return ( "Grade too Low" );
}

const char * AForm::GradeTooHighException::what( void ) const throw() {
	return ( "Grade too High" );
}

const char * AForm::FormNotSigned::what( void ) const throw() {
	return ( "Trying to Execute an unsigned Form" );
}

void AForm::checkGradeRange( t_grade grade ) {
	if ( grade < 1 ) {
		throw( GradeTooHighException() );
	}
	if ( grade > 150 ) {
		throw( GradeTooLowException() );
	}
}

std::ostream & operator<<( std::ostream & os, const AForm & obj ) {
	os << "AForm infos: ";
	os << "\nname: " << obj.getName();
	os << "\nsigned: " << obj.getSigned();
	os << "\nGrade to sign: " << obj.getReqToSign();
	os << "\nGrade to execute: " << obj.getReqToExecute();
	return ( os );
}

bool AForm::hasRightsToExecute( const Bureaucrat & executor ) const {
	if ( ! _signed ) {
		throw( FormNotSigned() );
	}
	if ( executor.getGrade() > getReqToExecute() ) {
		throw( GradeTooLowException() );
	}
	return ( true );
}
