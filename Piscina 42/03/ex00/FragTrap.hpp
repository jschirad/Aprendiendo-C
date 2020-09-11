/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:19:54 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 17:30:27 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string.h>

class FragTrap
{
private:
	FragTrap();
	std::string	name;
	int	hitPoints;
	int	maxHitPoints;
	int	energyPoints;
	int	maxEnergyPoints;
	int	level;
	int	meleeAttackDamage;
	int	rangedAttackDamage;
	int	armorDamageReduction;

public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &obj);
	~FragTrap();
	FragTrap &operator=(FragTrap const &obj);

	static	std::string	quotes[6];
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	bool	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);
};

#endif
