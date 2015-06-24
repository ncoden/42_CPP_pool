/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 02:56:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <time.h>
#include <stdlib.h>
#include "CentralBureaucracy.hpp"

int							CentralBureaucracy::_work_count = 3;
std::string					CentralBureaucracy::_works[3] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

CentralBureaucracy::CentralBureaucracy(void)
{
	_office_count = 0;
	_bureaucrat_count = 0;
	_queue_size = 0;
	srand(time(NULL));
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &src)
{
	*this = src;
}

CentralBureaucracy::~CentralBureaucracy(void)
{}

CentralBureaucracy			&CentralBureaucracy::operator=(CentralBureaucracy const &rhs)
{
	int						i;

	_office_count		= rhs._office_count;
	_bureaucrat_count	= rhs._bureaucrat_count;
	_queue_size			= rhs._queue_size;

	i = 0;
	while (i < _office_count)
	{
		_offices[i]		= rhs._offices[i];
		i++;
	}

	i = 0;
	while (i < _queue_size)
	{
		_queue[i]		= rhs._queue[i];
		i++;
	}

	return (*this);
}

void						CentralBureaucracy::feed(Bureaucrat &bureaucrat)
{
	if (_bureaucrat_count < 40)
	{
		if ((_bureaucrat_count % 2) == 0)
			_offices[_office_count].setSigner(bureaucrat);
		else
		{
			_offices[_office_count].setExecutor(bureaucrat);
			_offices[_office_count].setIntern(*(new Intern()));
			_office_count++;
		}
		_bureaucrat_count++;
	}
}

void						CentralBureaucracy::queueUp(std::string const &target)
{
	if (_queue_size < 20)
	{
		_queue[_queue_size] = target;
		_queue_size++;
	}
}

void						CentralBureaucracy::doBureaucracy(void)
{
	int						i;

	i = 0;
	while (i < _queue_size)
	{
		/* inline, because performances matters													*/
		/* (       random office       )              (        random work        ) ( target )	*/
		_offices[rand() % _office_count].doBureaucracy(_works[rand() % _work_count], _queue[i]);
		i++;
	}
	_queue_size = 0;
}
