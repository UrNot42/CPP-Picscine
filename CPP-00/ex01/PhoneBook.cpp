/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:11:02 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/23 06:48:05 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : id() , size() {}

void	PhoneBook::add_contact() {
	contacts[id].fill_contact();
	id = (id + 1) % 8;
	if (size <= 7)
		size++;
}

void	PhoneBook::print_contacts() {
	std::cout << "=============================================" << std::endl;
	std::cout << "|                 CONTACTS                  |" << std::endl;
	std::cout << "=============================================" << std::endl;
	for (size_t i = 0; i < this->size; i++)
	{
		this->contacts[i].display_contact(i + 1);
	}
	std::cout << "=============================================" << std::endl;
}

void	PhoneBook::print_one_contact(size_t index) {
	if (index >= 1 && index <= 8)
		this->contacts[index - 1].print_contact_details();
	else
		std::cout << "SORRY, but contact " << index << " doesn't exist!" << std::endl;
}

void	PhoneBook::search_contacts() {
	print_contacts();
	size_t	index;

	std::cout << "Contact Index> " << std::flush;
	std::cin >> index;
	print_one_contact(index);
	std::cin.clear();
	std::clearerr(stdin);
}
