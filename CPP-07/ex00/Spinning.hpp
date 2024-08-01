/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spinning.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:37:09 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:28:41 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPINNING_HPP
#define SPINNING_HPP

#include <iostream>
#include <ostream>
#include <string>

template <typename T>
void swap( T & a, T & b ) {
	T temp = a;
	a	   = b;
	b	   = temp;
}

template <typename T>
const T & min( const T & a, const T & b ) {
	return ( b < a ) ? b : a;
}

template <typename T>
const T & max( const T & a, const T & b ) {
	return ( a < b ) ? b : a;
}

#endif
