/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:19:57 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 14:41:21 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : name(name)
{
	std::cout << "" << this->name << " created!" << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : name(obj.name)
{
	std::cout << "" << this->name << " created!" << std::endl;
	this->level = obj.level;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->meleeAttackDamage = obj.meleeAttackDamage;
	this->rangedAttackDamage = obj.rangedAttackDamage;
	this->armorDamageReduction = obj.armorDamageReduction;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": is dead." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj)
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

std::string	ScavTrap::challenge[ScavTrap::nChallenge] = {
	"Te reto a que te vayas a la mierda",
	"Te reto a que le pegues a tu hermana",
	"Te reto a que te pares de manos gil1",
	"Te reto a que me pegues bien duro",
	"Te reto a un duelo",
	"No te reto pero vete a tomar por culo"
};

void	ScavTrap::meleeAttack(std::string const	&target)
{
	std::cout << "" << this->name << " attack " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage! " << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "" << this->name << " attack " << target << " at range, causing " << this->rangedAttackDamage << " points of damage! " << std::endl;
}

bool	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer()
{
	std::cout << "" << this->name << " - " << ScavTrap::challenge[rand() % ScavTrap::nChallenge] << std::endl;
}
