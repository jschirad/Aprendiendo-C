/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:41:23 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 14:44:05 by jschirad         ###   ########.fr       */
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
	std::cout << this->name << ": destroyed."  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

std::string ScavTrap::challenge[ScavTrap::nChallenge] = {
	"Te reto a que te vayas a la mierda",
	"Te reto a que le pegues a tu hermana",
	"Te reto a que te pares de manos gil1",
	"Te reto a que me pegues bien duro",
	"Te reto a un duelo",
	"No te reto pero vete a tomar por culo"
};

void ScavTrap::challengeNewcomer(void)
{
	std::cout << this->name << ": ";
	std::cout << ScavTrap::challenge[rand() % ScavTrap::nChallenge] << std::endl;
}
