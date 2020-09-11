/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:19:57 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 17:51:14 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : name(name)
{
	std::cout << "Loading..." << this->name << " is prepare for the combat ! " << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &obj) : name(obj.name)
{
	std::cout << "Loading..." << this->name << "is prepare for the combat" << std::endl;
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDamage = obj.meleeAttackDamage;
	this->rangedAttackDamage = obj.rangedAttackDamage;
	this->armorDamageReduction = obj.armorDamageReduction;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": is dead." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj)
{
	this->name = obj.name;
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDamage = obj.meleeAttackDamage;
	this->rangedAttackDamage = obj.rangedAttackDamage;
	this->armorDamageReduction = obj.armorDamageReduction;
	return (*this);
}

std::string	FragTrap::quotes[6] = {
	"Take that mo**** f***!",
	"Get out my way ash****!",
	"Tomorrow your sister will be mine !",
	"I am thinking in your mom !",
	"Have a nice day sweete!",
	"Please kill me"
};

void	FragTrap::meleeAttack(std::string const	&target)
{
	std::cout << "" << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage! " << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "" << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage! " << std::endl;
}

bool	FragTrap::takeDamage(unsigned int amount)
{
	int	diff = amount - this->armorDamageReduction;
	this->hitPoints -= diff;
	if (this->hitPoints < 0)
	{
		diff += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << "" << this->name << " take " << diff << " points of damage! " << std::endl;
	return (this->hitPoints == 0);
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int	sum = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		sum -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "" << this->name << " was repaire for " << sum << " poitns! " << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << "" << this->name << " said : " << FragTrap::quotes[rand() % 6] << " and "
		<< this->name << " attacks " << target << " for " << ((rand() % this->meleeAttackDamage) + 1) << " points of damage! " << std::endl;
	}
	else
	{
		std::cout << "" << this->name << " is out of energy! " << std::endl;
	}
}
