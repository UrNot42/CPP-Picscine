/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:01:08 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/30 17:21:18 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main()
{
	Point A(0.0f, 0.0f);
	Point B(1.0f, 0.0f);
	Point C(0.5f, 1.0f);

	Point inside(0.5f, 0.5f);
	Point outside(1.5f, 1.5f);
	Point onEdge(0.5f, 0.0f);

	std::cout << "Point (0.5, 0.5) inside triangle ABC: " << (bsp(A, B, C, inside) ? "Yes" : "No") << std::endl;
	std::cout << "Point (1.5, 1.5) inside triangle ABC: " << (bsp(A, B, C, outside) ? "Yes" : "No") << std::endl;
	std::cout << "Point (0.5, 0.0) inside triangle ABC: " << (bsp(A, B, C, onEdge) ? "Yes" : "No") << std::endl;

	return 0;
}
