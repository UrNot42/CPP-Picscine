/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:22:31 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 01:23:17 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main () {
	ClapTrap	clap("Fou");
	ScavTrap	scav("Bou");

	clap.attack(scav.getName());
	clap.takeDamage(5);
	clap.beRepaired(10);
	scav.attack(clap.getName());
	scav.takeDamage(9);
	scav.beRepaired(100);
	scav.guardGate();
}
