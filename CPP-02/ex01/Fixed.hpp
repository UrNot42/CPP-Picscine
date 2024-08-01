/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:29:14 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:53 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
	private:
		int				 _fixedValue;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed( const int integer );
		Fixed( const float floatingPoint );
		Fixed( const Fixed & other );
		Fixed & operator=( const Fixed & other );
		~Fixed();

		int	  getRawBits( void ) const;
		void  setRawBits( const int raw );

		float toFloat( void ) const;
		int	  toInt( void ) const;
};

std::ostream & operator<<( std::ostream & os, const Fixed & fixedValue );

#endif
