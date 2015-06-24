/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 01:02:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include "RobotomyRequestForm.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string				_target;

	public:
								RobotomyRequestForm(std::string const &target);
								~RobotomyRequestForm(void);
								RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);

		void					beExecuted(void) const;

		std::string	const		&getTarget(void) const;
};

#endif
