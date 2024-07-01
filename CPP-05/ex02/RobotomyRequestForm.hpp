/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:00:03 by ulevallo          #+#    #+#             */
/*   Updated: 2024/06/21 16:48:47 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <sys/time.h>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define REQ_SIGN_ROBOTOMY 72
# define REQ_EXEC_ROBOTOMY 45

class RobotomyRequestForm : AForm {
	public:

		RobotomyRequestForm();
		RobotomyRequestForm( const RobotomyRequestForm & other );
		RobotomyRequestForm &	operator= ( const RobotomyRequestForm & other );

		~RobotomyRequestForm();

		RobotomyRequestForm( const std::string & target );

		bool		coinflip() const;
		void		execute( Bureaucrat const & executor ) const;
};

#endif
