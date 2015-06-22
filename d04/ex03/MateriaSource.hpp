/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 13:53:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:34:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int					_materia_count;
		AMateria			*_materias[4];

	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const &src);

		MateriaSource		&operator=(MateriaSource const &rhs);

		void				learnMateria(AMateria *materia);
		AMateria			*createMateria(std::string const &type);
};

#endif
