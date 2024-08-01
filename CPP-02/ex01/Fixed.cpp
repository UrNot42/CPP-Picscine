/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:31:49 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:51 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue( 0 ) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int integer ) {
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = integer << _fractionalBits;
}

Fixed::Fixed( const float floatingPoint ) {
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = static_cast<int>( roundf( floatingPoint * ( 1 << _fractionalBits ) ) );
}

Fixed::Fixed( const Fixed & other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed & Fixed::operator=( const Fixed & other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return _fixedValue;
}

void Fixed::setRawBits( const int raw ) {
	_fixedValue = raw;
}

float Fixed::toFloat( void ) const {
	return static_cast<float>( _fixedValue ) / ( 1 << _fractionalBits );
}

int Fixed::toInt( void ) const {
	return _fixedValue >> _fractionalBits;
}

std::ostream & operator<<( std::ostream & os, const Fixed & fixedValue ) {
	os << fixedValue.toFloat();
	return os;
}
