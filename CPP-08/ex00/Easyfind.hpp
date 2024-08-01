/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:40:22 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:04 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
typename T::iterator easyfind( T & container, int value ) {
	typename T::iterator it = container.begin();
	while ( it != container.end() ) {
		if ( *it == value ) {
			return it;
		}
		++it;
	}
	throw std::out_of_range( "Value not found in container" );
}

#endif
