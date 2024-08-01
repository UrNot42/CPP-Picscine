/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:47:26 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:28:49 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <ostream>
#include <string>

template <typename T>
void iter( T * array, size_t length, void ( *func )( const T & ) ) {
	for ( size_t i = 0; i < length; ++i ) {
		func( array[i] );
	}
}

#endif
