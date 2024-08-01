/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:58:32 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:23 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	AAnimal * Tobby = new Dog();

	Tobby->makeSound();
	delete Tobby;
	/*AAnimal* carl = new AAnimal;

	carl.makeSound();*/ // POOF PROOF it works
}
