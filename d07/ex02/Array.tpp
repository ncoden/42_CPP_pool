/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 18:59:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <exception>

template<typename T>
class Array
{
	private:
		unsigned int			_size;
		T						*_datas;

	public:
		class					OutOfRangeException: public std::exception
		{
			public:
									OutOfRangeException(void) {}
									~OutOfRangeException(void) throw() {}
			char const				*what(void) const throw() { return ("Out of range");}
		};

								Array<T>(void)
		{
			_size = 0;
			_datas = NULL;

		}

								Array<T>(unsigned int size)
		{
			_size = size;
			_datas = new T[size];
		}

								~Array<T>(void)
		{
			delete (_datas);
		}

								Array<T>(Array<T> const &src)
		{
			*this = src;
		}

		Array<T>				&operator=(Array<T> const &rhs)
		{
			delete (_datas);
			_size = rhs._size;
			_datas = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
				_datas[i] = rhs._datas[i];
			return (*this);
		}

		T						&operator[](unsigned int i) throw(OutOfRangeException)
		{
			if (!_datas || i >= _size)
				throw (OutOfRangeException());
			return (_datas[i]);
		}

		unsigned int			size(void) const
		{
			return (_size);
		}
};

#endif
