/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:56:04 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:21:38 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal( const Animal & other );
		virtual ~Animal();

		Animal &	 operator=( const Animal & other );
		virtual void makeSound() const;
		std::string	 getType() const;
};

#endif
