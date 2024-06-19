/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:00:00 by ulevallo          #+#    #+#             */
/*   Updated: 2024/06/19 18:25:29 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define REQ_SIGN_PRESIDENTIAL 25
# define REQ_EXEC_PRESIDENTIAL 5

class PresidentialPardonForm : AForm {
	public:

		PresidentialPardonForm();
		PresidentialPardonForm( const PresidentialPardonForm & other );
		PresidentialPardonForm &	operator= ( const PresidentialPardonForm & other );

		~PresidentialPardonForm();

		PresidentialPardonForm( const std::string & target );

		void		execute( Bureaucrat const & executor ) const;
};

#endif
