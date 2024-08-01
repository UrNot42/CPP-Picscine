/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:44:40 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:11:33 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * zombieHorde( int N, std::string name ) {
	Zombie * zombie = new Zombie[N];

	for ( int i = 0; i < N; i++ ) {
		zombie[i].setName( name );
	}
	return zombie;
}
