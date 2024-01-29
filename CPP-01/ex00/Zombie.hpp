/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:53:05 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/26 10:52:01 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
public:
	Zombie( std::string name );
	~Zombie();
	void	announce(void);
private:
	std::string	name;
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );
