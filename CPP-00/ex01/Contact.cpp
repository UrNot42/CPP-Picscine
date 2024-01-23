/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:21:42 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/23 06:40:30 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

static std::string	prompt(const char *display) {
	std::string	str;

	std::cout << display << ": " << std::flush;
	while(!std::getline(std::cin, str) || !str.size()) {
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << std::endl << display << ": " << std::flush;
	}
	return str;
}

void	Contact::fill_contact() {
	this->first_name = prompt("What is your first Name");
	this->last_name = prompt("What is your last Name");
	this->nickname = prompt("What is your Nickname");
	this->phone_number = prompt("What is your Phone Number");
	this->darkest_secret = prompt("And what is your darkest secret");
}

static void	display_element(std::string str)
{
	if (str.size() > 10)
		str[9] = '.';
	std::cout << std::setw(10) << str.substr(0,10) << "|";
}

void	Contact::display_contact(size_t index) {
	std::cout << "|" << std::setw(10) << index << "|";
	display_element(this->first_name);
	display_element(this->last_name);
	display_element(this->nickname);
	std::cout << std::endl;
}

void	Contact::print_contact_details() {
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string	Contact::get_first_name() {
	return this->first_name;
}

std::string	Contact::get_last_name() {
	return this->last_name;
}

std::string	Contact::get_nickname() {
	return this->nickname;
}

std::string Contact::get_phone_number() {
	return this->phone_number;
}

std::string Contact::get_darkest_secret() {
	return this->darkest_secret;
}
