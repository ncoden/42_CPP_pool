/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 13:58:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:45:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <string>
# include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(Cure const &src);

		Cure				&operator=(Cure const &rhs);

		AMateria			*clone() const;
		void				use(ICharacter const &target);
};

#endif
