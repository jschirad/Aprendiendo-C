/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:16:46 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 17:30:26 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string.h>

class ClapTrap
{
protected:
	ClapTrap();

	std::string	name;
	int level;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

	void	copy(ClapTrap const &obj);
public:
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &obj);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const &obj);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	bool	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string const &getName(void);
};

#endif
