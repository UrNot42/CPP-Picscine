/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 05:01:25 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:21 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
	private:
		Brain * blob;

	public:
		Dog();
		Dog( const Dog & other );
		~Dog();
		Dog &	operator=( const Dog & other );

		void	makeSound() const;

		Brain * getBrain();
};

#endif
