/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:56:04 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:05 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal( const AAnimal & other );
		virtual ~AAnimal() = 0;

		AAnimal &	 operator=( const AAnimal & other );
		virtual void makeSound() const = 0;
		std::string	 getType() const;
};

#endif
