/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:46:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/04 13:18:02 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


# define SUM_OF_FORM_TYPES 3

class Intern
{
	public:

		Intern();
		Intern( const Intern & src );
		~Intern();

		Intern &	operator= ( const Intern & rhs );

		AForm *		makeForm( std::string const & formTarget, std::string const & formName );
};

#endif
