/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:11:42 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:11:54 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		void add_contact();
		void search_contacts();

	private:
		void	print_contacts();
		void	print_one_contact( size_t index );
		Contact contacts[8];
		size_t	id;
		size_t	size;
};
