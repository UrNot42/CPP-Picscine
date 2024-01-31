/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:58:32 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 07:17:45 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	AAnimal *Tobby = new Dog();

	Tobby->makeSound();
	delete Tobby;
	/*AAnimal* carl = new AAnimal;

	carl.makeSound();*/ // POOF PROOF it works
}
