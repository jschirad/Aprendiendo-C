/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:12:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 14:43:36 by jschirad         ###   ########.fr       */
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
	std::cout << this->name << " destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

std::string FragTrap::quotes[FragTrap::nQuotes] = {
	"Toma eso maldito!",
	"Sal de mi camino o moriras!",
	"Te arrpentiras de esto !",
	"Fatality !",
	"Mortality !",
	"Voy a matarte !"
};

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
		if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << ": "
				<< FragTrap::quotes[rand() % FragTrap::nQuotes] << std::endl
				<< this->name << " attack "
				<< target << " for " << ((rand() % this->meleeAttackDamage) + 1)
				<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name
				<< " is out of energy!" << std::endl;
	}
}
