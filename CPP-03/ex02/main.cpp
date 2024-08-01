/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:22:31 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:21:19 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap frag( "Souuuuuuuuuuuuuuuuuuuu" );

	frag.attack( "no one" );
	frag.takeDamage( 9 );
	frag.beRepaired( 100 );
	frag.highFivesGuys();
}
