/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 22:40:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string				_target;

	public:
								ShrubberyCreationForm(std::string const &target);
								~ShrubberyCreationForm(void);
								ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		void					beExecuted(void);

		std::string	const		&getTarget(void) const;
};

#endif
