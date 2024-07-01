/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/06/28 13:11:51 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define REQ_SIGN_SHURBBERY 145
# define REQ_EXEC_SHURBBERY 137

class ShrubberyCreationForm : AForm {
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm & other );
		ShrubberyCreationForm &	operator= ( const ShrubberyCreationForm & other );

		~ShrubberyCreationForm();

		ShrubberyCreationForm( const std::string & target );

		void		execute( Bureaucrat const & executor ) const;
};

#endif
