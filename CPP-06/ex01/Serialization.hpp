/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:30:28 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/21 12:11:36 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "Data.hpp"
#include <stdint.h>
#include <string>
#include <iostream>

class Serialization {
	private:
		Serialization();
		Serialization( const Serialization & other );
		Serialization & operator=( const Serialization & other );

	public:
		static uintptr_t serialize( data_t * ptr );
		static data_t *	 deserialize( uintptr_t raw );

		~Serialization();
};

#endif
