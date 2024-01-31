/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 05:01:25 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 06:59:38 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
	private:
		Brain*	blob;
	public:

		Dog();
		Dog( const Dog &other );
		~Dog();
		Dog &	operator= ( const Dog &other );

		void makeSound() const;

		Brain*	getBrain();
};

#endif
