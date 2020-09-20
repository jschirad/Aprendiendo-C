/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:46:15 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 17:30:23 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name): name(name)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 100;
	this->rangedAttackDamage = 100;
	this->armorDamageReduction = 100;
}

ClapTrap::ClapTrap(ClapTrap const &obj): name(obj.name)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
	ClapTrap::copy(obj);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

void	ClapTrap::copy(ClapTrap const &obj)
{
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDamage = obj.meleeAttackDamage;
	this->rangedAttackDamage = obj.rangedAttackDamage;
	this->armorDamageReduction = obj.armorDamageReduction;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "" << this->name << " attack " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "" << this->name << " attack " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

bool ClapTrap::takeDamage(unsigned int amount)
{
	int dealt = amount - this->armorDamageReduction;
	this->hitPoints -= dealt;
	if (this->hitPoints < 0)
	{
		dealt += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << this->name << " take "
			<< dealt << " points of damage!" << std::endl;
	return (this->hitPoints == 0);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int healed = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		healed -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << this->name << " is repaired for "
			<< healed << "!" << std::endl;
}

std::string const &ClapTrap::getName(void)
{
	return (this->name);
}
