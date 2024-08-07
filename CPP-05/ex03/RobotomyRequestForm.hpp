/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:00:03 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:27:09 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <sys/time.h>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define REQ_SIGN_ROBOTOMY 72
# define REQ_EXEC_ROBOTOMY 45

class RobotomyRequestForm : public AForm {
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
