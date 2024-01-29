/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:41:19 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/28 18:19:33 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N_ZOMBIES 10

int	main() {
	Zombie*	zombie;

	zombie = zombieHorde(N_ZOMBIES, "Fou");
	for (int i = 0; i < N_ZOMBIES; i++)
		zombie[i].announce();
	delete[] zombie;
}
