/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:04:23 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:15:13 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( const Point a, const Point b, const Point c, const Point point ) {
	Fixed detT = ( b.getX() - a.getX() ) * ( c.getY() - a.getY() ) - ( c.getX() - a.getX() ) * ( b.getY() - a.getY() );

	Fixed alpha = ( ( point.getX() - b.getX() ) * ( c.getY() - b.getY() )
					- ( c.getX() - b.getX() ) * ( point.getY() - b.getY() ) )
				/ detT;
	Fixed beta = ( ( point.getX() - c.getX() ) * ( a.getY() - c.getY() )
				   - ( a.getX() - c.getX() ) * ( point.getY() - c.getY() ) )
			   / detT;
	Fixed gamma = 1.0f - alpha - beta;

	return alpha > 0.0f && beta > 0.0f && gamma > 0.0f;
}
