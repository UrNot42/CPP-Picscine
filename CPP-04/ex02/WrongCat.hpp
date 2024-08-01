/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:59:26 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:38 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat( const WrongCat & other );
		~WrongCat();
		WrongCat & operator=( const WrongCat & other );

		void	   makeSound() const;
};

#endif
