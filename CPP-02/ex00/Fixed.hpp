/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:13:03 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:43 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private:
		int				 _fixedValue;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed( const Fixed & other );
		Fixed & operator=( const Fixed & other );
		~Fixed();

		int	 getRawBits( void ) const;
		void setRawBits( const int raw );
};

#endif
