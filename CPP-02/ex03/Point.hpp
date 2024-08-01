/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:53:52 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:15:49 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point();
		Point( const float x, const float y );
		Point( const Point & other );

		Point & operator=( const Point & other );

		~Point();

		Fixed getX() const;
		Fixed getY() const;
};

bool bsp( const Point a, const Point b, const Point c, const Point point );

#endif
