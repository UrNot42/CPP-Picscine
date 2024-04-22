/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:41:19 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/29 19:51:27 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie*	zombie;

	zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;
	randomChump("Bar");
}
