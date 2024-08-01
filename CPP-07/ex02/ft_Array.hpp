/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Array.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:55:05 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:28:55 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_hpp
#define FT_ARRAY_hpp

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T *	   elements;
		size_t arraySize;

	public:
		Array() : elements( NULL ), arraySize( 0 ) {}

		Array( unsigned int n ) : elements( new T[n]() ), arraySize( n ) {}

		Array( const Array & other ) : elements( new T[other.arraySize] ), arraySize( other.arraySize ) {
			for ( size_t i = 0; i < arraySize; ++i ) {
				elements[i] = other.elements[i];
			}
		}

		Array & operator=( const Array & other ) {
			if ( this != &other ) {
				delete[] elements;
				elements  = new T[other.arraySize];
				arraySize = other.arraySize;
				for ( size_t i = 0; i < arraySize; ++i ) {
					elements[i] = other.elements[i];
				}
			}
			return *this;
		}

		~Array() { delete[] elements; }

		T & operator[]( size_t index ) {
			if ( index >= arraySize ) {
				throw std::out_of_range( "Index out of bounds" );
			}
			return elements[index];
		}

		size_t size() const { return arraySize; }
};

#endif
