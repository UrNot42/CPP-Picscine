/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:37:48 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:15:17 by ulevallo         ###   ########.fr       */
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

		Fixed &		 operator=( const Fixed & other );
		bool		 operator>( const Fixed & other ) const;
		bool		 operator<( const Fixed & other ) const;
		bool		 operator>=( const Fixed & other ) const;
		bool		 operator<=( const Fixed & other ) const;
		bool		 operator==( const Fixed & other ) const;
		bool		 operator!=( const Fixed & other ) const;

		Fixed		 operator+( const Fixed & other ) const;
		Fixed		 operator-( const Fixed & other ) const;
		Fixed		 operator*( const Fixed & other ) const;
		Fixed		 operator/( const Fixed & other ) const;

		Fixed &		 operator++();
		Fixed		 operator++( int );
		Fixed &		 operator--();
		Fixed		 operator--( int );

		friend Fixed operator-( float lhs, const Fixed & rhs );

		~Fixed();

		int					 getRawBits( void ) const;
		void				 setRawBits( const int raw );

		float				 toFloat( void ) const;
		int					 toInt( void ) const;

		static Fixed &		 max( Fixed & a, Fixed & b );
		static const Fixed & max( const Fixed & a, const Fixed & b );
		static Fixed &		 min( Fixed & a, Fixed & b );
		static const Fixed & min( const Fixed & a, const Fixed & b );
};

std::ostream & operator<<( std::ostream & os, const Fixed & fixedValue );

#endif
