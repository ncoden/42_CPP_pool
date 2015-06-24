/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 01:02:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string				_target;

	public:
								PresidentialPardonForm(std::string const &target);
								~PresidentialPardonForm(void);
								PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		void					beExecuted(void) const;

		std::string	const		&getTarget(void) const;
};

#endif
