/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:46:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:52 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

#define SUM_OF_FORM_TYPES 3

class Intern {
	public:
		Intern();
		Intern( const Intern & src );
		~Intern();

		Intern & operator=( const Intern & rhs );

		AForm *	 makeForm( const std::string & formTarget, const std::string & formName );
};

#endif
