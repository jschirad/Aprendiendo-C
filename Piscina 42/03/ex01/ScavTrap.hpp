/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:33:02 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 10:56:02 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string.h>

class ScavTrap
{
private:
	ScavTrap();
	std::string	name;
	int	hitPoints;
	int	maxHitPoints;
	int	energyPoints;
	int	maxEnergyPoints;
	int	level;
	int	meleeAttackDamage;
	int	rangedAttackDamage;
	int	armorDamageReduction;

	static const int nChallenge = 6;
	static	std::string	challenge[ScavTrap::nChallenge];
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &obj);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	bool	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};

#endif
