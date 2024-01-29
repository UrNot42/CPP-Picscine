/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:22:41 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/29 13:10:03 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	std::string			hello = "HI THIS IS BRAIN";
	std::string*		stringPTR = &hello;
	const std::string&	stringREF = hello;

	std::cout << "Memory address of the string variable: " << &hello << std::endl;
	std::cout << "Memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "And then: " << std::endl;
	std::cout << std::endl;

	std::cout << "Value of the string variable:  " << hello << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}
