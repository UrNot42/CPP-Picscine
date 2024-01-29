/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:13:15 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/29 11:49:18 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Created complaining entity" << std::endl;
}

Harl::~Harl() {
	std::cout << "Restored world peace" << std::endl;
}

void	Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*functions[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR", "\0"};

	int i = 0;
	while (complaints[i] != level && !complaints[i].empty())
		i++;
	if (!complaints[i].empty())
		(this->*functions[i])();
}
