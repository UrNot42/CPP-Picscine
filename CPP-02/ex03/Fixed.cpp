/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:40:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:15:15 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedValue( 0 ) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int integer ) {
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = integer << _fractionalBits;
}

Fixed::Fixed( const float floatingPoint ) {
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = roundf( floatingPoint * ( 1 << _fractionalBits ) );
}

Fixed::Fixed( const Fixed & other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( const Fixed & other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedValue = other.getRawBits();
	return *this;
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

bool Fixed::operator>( const Fixed & other ) const {
	return this->_fixedValue > other._fixedValue;
}

bool Fixed::operator<( const Fixed & other ) const {
	return this->_fixedValue < other._fixedValue;
}

bool Fixed::operator>=( const Fixed & other ) const {
	return this->_fixedValue >= other._fixedValue;
}

bool Fixed::operator<=( const Fixed & other ) const {
	return this->_fixedValue <= other._fixedValue;
}

bool Fixed::operator==( const Fixed & other ) const {
	return this->_fixedValue == other._fixedValue;
}

bool Fixed::operator!=( const Fixed & other ) const {
	return this->_fixedValue != other._fixedValue;
}

Fixed Fixed::operator+( const Fixed & other ) const {
	return Fixed( this->toFloat() + other.toFloat() );
}

Fixed Fixed::operator-( const Fixed & other ) const {
	return Fixed( this->toFloat() - other.toFloat() );
}

Fixed operator-( float lhs, const Fixed & rhs ) {
	return Fixed( lhs - rhs.toFloat() );
}

Fixed Fixed::operator*( const Fixed & other ) const {
	return Fixed( this->toFloat() * other.toFloat() );
}

Fixed Fixed::operator/( const Fixed & other ) const {
	return Fixed( this->toFloat() / other.toFloat() );
}

Fixed & Fixed::operator++() {
	this->_fixedValue++;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed temp( *this );
	this->_fixedValue++;
	return temp;
}

Fixed & Fixed::operator--() {
	this->_fixedValue--;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed temp( *this );
	this->_fixedValue--;
	return temp;
}

Fixed & Fixed::min( Fixed & a, Fixed & b ) {
	return ( a <= b ) ? a : b;
}

const Fixed & Fixed::min( const Fixed & a, const Fixed & b ) {
	return ( a <= b ) ? a : b;
}

Fixed & Fixed::max( Fixed & a, Fixed & b ) {
	return ( a >= b ) ? a : b;
}

const Fixed & Fixed::max( const Fixed & a, const Fixed & b ) {
	return ( a >= b ) ? a : b;
}

std::ostream & operator<<( std::ostream & os, const Fixed & fixedValue ) {
	os << fixedValue.toFloat();
	return os;
}
