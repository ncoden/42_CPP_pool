/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 17:19:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 17:30:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "BocalSteroid.hpp"
#include "AsteroBocal.hpp"
#include "MiningBarge.hpp"

int				main(void)
{
	MiningBarge		ship;
	DeepCoreMiner	miner_dc;
	StripMiner		miner_s;
	BocalSteroid	steroid;
	AsteroBocal		astero;

	ship.equip(&miner_dc);
	ship.equip(&miner_s);

	ship.mine(&steroid);
	ship.mine(&astero);
	return (0);
}
