/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 14:04:31 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/17 16:54:18 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int i);
		Fixed(float f);
		~Fixed(void);

		Fixed				&operator=(Fixed const & rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void)	const;
		int					toInt(void)		const;

	private:
		static int const	_nBit;

		int					_rawBits;
};

std::ostream				&operator<<(std::ostream &os, Fixed const &rhs);

#endif
