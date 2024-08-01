/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:13:15 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:27 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
	std::cout << "Oh the pc is getting slower" << std::endl;
}

void Harl::info() {
	std::cout << "I'm pretty sure the screen is frozen" << std::endl;
}

void Harl::warning() {
	std::cout << "Wow, it is fuming right now, I should probably step back from it" << std::endl;
}

void Harl::error() {
	std::cout << "Oh well, it exploded, the building is on fire now and I lost a leg" << std::endl;
}

void Harl::complain( std::string level ) {
	void		( Harl::*functions[] )( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string complaints[]				   = { "DEBUG", "INFO", "WARNING", "ERROR", "\0" };

	int			i = 0;
	while ( complaints[i] != level && ! complaints[i].empty() ) {
		i++;
	}
	if ( ! complaints[i].empty() ) {
		std::cout << "[ " << complaints[i] << " ]" << std::endl;
	}
	switch ( i ) {
		case ( 0 ):
			( this->*functions[0] )();
			// __attribute__ ((fallthrough));
		case ( 1 ):
			( this->*functions[1] )();
			// __attribute__ ((fallthrough));
		case ( 2 ):
			( this->*functions[2] )();
			// __attribute__ ((fallthrough));
		case ( 3 ):
			( this->*functions[3] )();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
