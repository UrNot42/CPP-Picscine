/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:46:25 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/29 00:45:39 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	my_sed(std::string filename, std::string s1, std::string s2) {
	std::ifstream input(filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error opening file: " << filename << std::endl;
		return;
	}

	std::string newFilename = filename + ".replace";
	std::ofstream output(newFilename.c_str());

	if (!output.is_open())
	{
		std::cerr << "Error creating output file: " << newFilename << std::endl;
		input.close();
		return;
	}

	std::string line;
	while (std::getline(input, line))
	{
		std::string::size_type pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output << line << std::endl;
	}

	input.close();
	output.close();
}

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "Please provide valid arguments" << std::endl;
		std::cout << "Correct usage:" << std::endl;
		std::cout << "./my_sed [file] [string_to_replace] [replacement_string]" << std::endl;
		return 0;
	}
	my_sed(argv[1], argv[2], argv[3]);
}
