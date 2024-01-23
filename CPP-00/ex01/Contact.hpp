/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:05:43 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/23 06:27:23 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>

class Contact {
public:
	Contact();
	void		fill_contact();
	void		display_contact(size_t index);
	void		print_contact_details();
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string darkest_secret;
};
