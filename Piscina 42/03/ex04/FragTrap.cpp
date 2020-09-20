/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:12:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 13:00:33 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	std::cout << this->name << ": created. Ready for Combat! " << std::endl;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &obj): ClapTrap(obj.name)
{
	std::cout << this->name << ": created. Ready for Combat! " << std::endl;
	ClapTrap::copy(obj);
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " -> dead." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

std::string FragTrap::quotes[6] = {
	"I am a tornado of death and bullets!",
	"Crit-i-cal!",
	"Loading combat packages!",
	"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
	"I am rubber, and you are so dead!",
	"Take that !"
};

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
		if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << " - "
				<< FragTrap::quotes[rand() % 6] << std::endl
				<< this->name << " attack "
				<< target << " for " << ((rand() % this->meleeAttackDamage) + 1)
				<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "" << this->name
				<< " is out of energy!" << std::endl;
	}
}
