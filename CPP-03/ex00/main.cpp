/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:22:31 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 00:52:32 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main () {
	ClapTrap	clap("Fou");
	ClapTrap	trap("Bou");

	clap.attack(trap.getName());
	clap.takeDamage(5);
	clap.beRepaired(10);
	trap.attack(clap.getName());
	trap.takeDamage(9);
	trap.beRepaired(100);
}
