/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:22:31 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 02:41:26 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main () {
	FragTrap	frag("Souuuuuuuuuuuuuuuuuuuu");

	frag.attack("no one");
	frag.takeDamage(9);
	frag.beRepaired(100);
	frag.highFivesGuys();
}
