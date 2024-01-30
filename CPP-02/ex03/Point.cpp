/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:54:13 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/30 18:44:02 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other)
{
	if (this == &other)
		return *this;

	x = other.x;
	y = other.y;

	return *this;
}

Point::~Point() {}

Fixed Point::getX() const { return x; }
Fixed Point::getY() const { return y; }
