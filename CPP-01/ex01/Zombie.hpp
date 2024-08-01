/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:53:05 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:11:35 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void setName( std::string name );
		void announce( void );

	private:
		std::string name;
};

Zombie * zombieHorde( int N, std::string name );
