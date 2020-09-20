/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:41:23 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 12:52:14 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
	std::cout << this->name << ": created. Ready for challenge you!" << std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &obj):
	ClapTrap(obj.name)
{
	std::cout << this->name << ": created. Ready for challenge you!" << std::endl;
	ClapTrap::copy(obj);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " -> dead." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

std::string ScavTrap::challenge[6] = {
	"You versus me! Me versus you! Either way!",
	"I will prove to you my robotic superiority!",
	"Dance battle! Or, you know... regular battle.",
	"Man versus machine! Very tiny streamlined machine!",
	"Care to have a friendly duel?",
	"You wanna fight with me?! Put 'em up!.. Put 'em up?"
};

void	ScavTrap::challengeNewcomer()
{
	std::cout << "" << this->name << " - " << ScavTrap::challenge[rand() % 6] << std::endl;
}

