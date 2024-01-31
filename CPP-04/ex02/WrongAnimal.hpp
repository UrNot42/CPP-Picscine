/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:56:04 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 06:35:39 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;

	public:

		WrongAnimal();
		WrongAnimal( const WrongAnimal &other );
		virtual ~WrongAnimal();

		WrongAnimal &	operator= ( const WrongAnimal &other );
		virtual void makeSound() const ;
		std::string	getType() const ;
};

#endif
