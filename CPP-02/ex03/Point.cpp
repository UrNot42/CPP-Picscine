/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:54:13 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:15:23 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x( 0.0f ), y( 0.0f ) {}

Point::Point( const float x, const float y ) : x( x ), y( y ) {}

Point::Point( const Point & other ) : x( other.x ), y( other.y ) {}

Point & Point::operator=( const Point & other ) {
	if ( this == &other ) {
		return *this;
	}

	const_cast<Fixed &>( this->x ) = other.x;
	const_cast<Fixed &>( this->y ) = other.y;

	return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}
