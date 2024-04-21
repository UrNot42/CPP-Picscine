/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:08:02 by ulevallo          #+#    #+#             */
/*   Updated: 2024/04/21 21:04:24 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name( "" ), _grade( 150 ) {
}

Bureaucrat::Bureaucrat( std::string name, short unsigned int grade ) {
	checkGradeRange( grade );
	this -> _name = name;
	this -> _grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) {
	checkGradeRange( src . _grade );
	this -> _name = src . _name;
	this -> _grade = src . _grade;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &	Bureaucrat::operator=( const Bureaucrat & rhs ) {
	checkGradeRange( rhs . _grade );
	this -> _name = rhs . _name;
	this -> _grade = rhs . _grade;
	return ( *this );
}

Bureaucrat &	Bureaucrat::operator++() {
	checkGradeRange( this -> _grade - 1 );
	this -> _grade --;
	return ( *this );
}

Bureaucrat &	Bureaucrat::operator--() {
	checkGradeRange( this -> _grade + 1 );
	this -> _grade ++;
	return ( *this );
}

std::string	Bureaucrat::getName( void ) const {
	return ( _name );
}

short unsigned int	Bureaucrat::getGrade( void ) const {
	return ( _grade );
}

const char *	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ( "Grade too Low" );
}

const char *	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ( "Grade too High" );
}
char *	Bureaucrat::checkGradeRange( short unsigned int grade ) {
	if ( grade < 1 ) {
		throw ( Bureaucrat::GradeTooHighException() );
	}
	if ( grade > 150 ) {
		throw ( Bureaucrat::GradeTooLowException() );
	}
	return ( 0 );
}