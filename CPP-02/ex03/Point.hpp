/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:53:52 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/30 17:21:09 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	Point(float const x, float const y);
	Point(const Point &other);

	Point &operator=(const Point &other);

	~Point();

	Fixed getX() const;
	Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
