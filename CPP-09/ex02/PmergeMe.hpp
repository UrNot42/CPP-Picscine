/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:40:27 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/24 14:25:15 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <climits>
#include <ctime>
#include <deque>
#include <iostream>
#include <list>
#include <sstream>

#define VALID_SET "0123456789"
#define THRESHOLD 5

bool isValidNumber( const std::string & in );

bool isValidInput( char ** av );

template <typename Container>
void printContainer( Container & container, const char * label );

template <typename Container>
void fillContainer( Container & container, char ** av );

template <typename Container, typename Compare>
void containerInsert( Container & sorted, const int & nb, Compare comp );

template <typename Container>
void containerInsertionSort( Container & container );

template <typename Container>
void containerMergeInsertionSort( Container & container );

template <typename Container>
void sortContainer( Container & container, double & time );

#include "PmergeMe.tpp"

#endif
