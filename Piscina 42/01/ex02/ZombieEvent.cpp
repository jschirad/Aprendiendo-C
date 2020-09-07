/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:54:37 by marvin            #+#    #+#             */
/*   Updated: 2020/07/10 10:05:20 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

ZombieEvent::~ZombieEvent(){};

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie	*ZombieEvent::randomChump()
{
	int	i;
	int	nb;
	Zombie	*zombie1;
	std::string	names[] = {"Facu", "Roberto", "Jesus", "David", "Carlos"};

	if (this->type == "")
		this->setZombieType("Chump");
	nb = 4;
	i = rand() % nb;
	zombie1 = newZombie(names[i]);
	return (zombie1);
}
