/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:00:00 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:30 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

#define REQ_SIGN_PRESIDENTIAL 25
#define REQ_EXEC_PRESIDENTIAL 5

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( const PresidentialPardonForm & other );
		PresidentialPardonForm & operator=( const PresidentialPardonForm & other );

		~PresidentialPardonForm();

		PresidentialPardonForm( const std::string & target );

		void execute( const Bureaucrat & executor ) const;
};

#endif
