/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/25 23:03:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <list>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack
{
	public:
		typedef T										container_type;
		typedef	typename std::list<T>::size_type		size_type;
		typedef typename std::list<T>::iterator			iterator;
		typedef typename std::list<T>::const_iterator	const_iterator;

	private:
		std::list<T>			_datas;
		size_type				_data_count;

	public:
								MutantStack<T>(void):
									_datas()
		{
			_data_count = 0;
		}

								~MutantStack<T>(void){}
								MutantStack<T>(MutantStack<T> const &src) { *this = src; }

		MutantStack<T>			&operator=(MutantStack<T> const &rhs)
		{
			_datas = rhs._datas;
			_data_count = rhs._data_count;
			return (*this);
		}

		bool					empty(void) const	{ return (_data_count == 0); }
		size_type				size(void) const	{ return (_data_count); }
		T const					&top(void) const	{ return (_datas.front()); }
		T 						&top(void)			{ return (_datas.front()); }

		void					push(T const &value)
		{
			if (_data_count > 0)
			{
				_datas.push_front(value);
				_data_count++;
			}
		}

		void					pop(void)
		{
			if (_data_count > 0)
			{
				_datas.pop_front();
				_data_count--;
			}
		}

								operator std::stack<T>(void)
		{
			std::stack<T> 								stack;
			typename std::list<T>::reverse_iterator		ti = _datas.rbegin();
			typename std::list<T>::reverse_iterator		tie = _datas.rend();

			while (ti != tie)
			{
				stack.push(*ti);
				++ti;
			}
			return (stack);
		}

		iterator				begin(void)			{ return (_datas.begin()); }
		const_iterator			begin(void) const	{ return (_datas.begin()); }
		iterator				end(void)			{ return (_datas.end()); }
		const_iterator			end(void) const		{ return (_datas.end()); }
};

#endif
