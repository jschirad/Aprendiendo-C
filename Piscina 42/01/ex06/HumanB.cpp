/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:33:09 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 10:33:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};

HumanB::HumanB(std::string	name)
{
	this->name = name;
}

HumanB::~HumanB(){};

void	HumanB::setWeapon(const Weapon &escopeta)
{
	this->escopeta = &escopeta;
}

void	HumanB::attack()
{
	if (this->escopeta)
		std::cout<< this->name << " attack with his "<< this->escopeta->getType() << std::endl;
	else
		std::cout<< this->name << "has no weapon, he will died !" <<std::endl;
}
