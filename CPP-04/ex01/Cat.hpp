/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:59:26 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:22:38 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
	private:
		Brain * blob;

	public:
		Cat();
		Cat( const Cat & other );
		~Cat();
		Cat &	operator=( const Cat & other );

		void	makeSound() const;
		Brain * getBrain();
};

#endif
