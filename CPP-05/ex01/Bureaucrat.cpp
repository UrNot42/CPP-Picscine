/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:08:02 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:25:56 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name( "anonymous" ), _grade( 150 ) {}

Bureaucrat::Bureaucrat( const std::string name, t_grade grade ) : _name( name ) {
	checkGradeRange( grade );
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name( src._name ) {
	checkGradeRange( src._grade );
	this->_grade = src._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs ) {
	checkGradeRange( rhs._grade );
	this->_grade = rhs._grade;
	return ( *this );
}

Bureaucrat & Bureaucrat::operator++() {
	checkGradeRange( this->_grade - 1 );
	this->_grade--;
	return ( *this );
}

Bureaucrat & Bureaucrat::operator--() {
	checkGradeRange( this->_grade + 1 );
	this->_grade++;
	return ( *this );
}

std::string Bureaucrat::getName( void ) const {
	return ( _name );
}

t_grade Bureaucrat::getGrade( void ) const {
	return ( _grade );
}

void Bureaucrat::signForm( Form & obj ) const {
	try {
		obj.beSigned( *this );
	} catch ( std::exception & ex ) {
		std::cout << _name << " couldn't sign " << obj.getName() << " because " << ex.what() << "." << std::endl;
	}
	if ( obj.getSigned() ) {
		std::cout << _name << " signed " << obj.getName() << std::endl;
	}
}

const char * Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ( "Grade too Low" );
}

const char * Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ( "Grade too High" );
}

const char * Bureaucrat::checkGradeRange( t_grade grade ) {
	if ( grade < 1 ) {
		throw( Bureaucrat::GradeTooHighException() );
	}
	if ( grade > 150 ) {
		throw( Bureaucrat::GradeTooLowException() );
	}
	return ( 0 );
}

std::ostream & operator<<( std::ostream & os, const Bureaucrat & obj ) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return ( os );
}
