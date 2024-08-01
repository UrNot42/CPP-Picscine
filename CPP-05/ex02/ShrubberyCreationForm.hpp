/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:39 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

#define REQ_SIGN_SHURBBERY 145
#define REQ_EXEC_SHURBBERY 137

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm & other );
		ShrubberyCreationForm & operator=( const ShrubberyCreationForm & other );

		~ShrubberyCreationForm();

		ShrubberyCreationForm( const std::string & target );

		void execute( const Bureaucrat & executor ) const;
};

#endif
