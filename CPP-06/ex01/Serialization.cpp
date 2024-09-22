/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:30:50 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/21 12:13:27 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {
	std::cout << "Serialization Default constructor called" << std::endl;
}

Serialization::Serialization( const Serialization & ) {
	std::cout << "Serialization Copy constructor called" << std::endl;
}

Serialization & Serialization::operator=( const Serialization & ) {
	std::cout << "Serialization Copy assignment operator called" << std::endl;
	return ( *this );
}

Serialization::~Serialization() {
	std::cout << "Serialization Destructor called" << std::endl;
}

uintptr_t Serialization::serialize( data_t * ptr ) {
	return ( reinterpret_cast<uintptr_t>( ptr ) );
}

data_t * Serialization::deserialize( uintptr_t raw ) {
	return ( reinterpret_cast<data_t *>( raw ) );
}
