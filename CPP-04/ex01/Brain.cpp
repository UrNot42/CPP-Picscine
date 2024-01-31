/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:42:03 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 12:14:04 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( const Brain &other ) {
	std::cout << "Brain Copy constructor called" << std::endl;

	copyIdeas(other);
}

Brain &	Brain::operator=( const Brain &other ) {
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &other)
		copyIdeas(other);
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::copyIdeas( Brain &other) {
	unsigned int	i = 0;
	while (!other.ideas[i].empty()) {
		this->ideas[i] = other.ideas[i];
		i++;
	}
}

void	Brain::copyIdeas( const Brain &other) {
	unsigned int	i = 0;
	while (!other.ideas[i].empty() || !this->ideas[i].empty()) {
		this->ideas[i] = other.ideas[i];
		i++;
	}
}
