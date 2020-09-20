/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:49:43 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 17:29:38 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << this->name << " -> ninja robot created." <<std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &obj) : ClapTrap(obj.name)
{
	std::cout << this->name << " -> ninja robot created." <<std::endl;
	ClapTrap::copy(obj);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << " -> dead." <<std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &obj)
{
	ClapTrap::copy(obj);
	return (*this);
}

void	NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << "- Do you want listen a joke " << trap.getName() << "? " << std::endl;
	std::cout << trap.getName() << "- Not really..." << std::endl;
	std::cout << this->name <<"- Knock Knock." << std::endl;
	std::cout << trap.getName() << "- Who's there?" << std::endl;
	std::cout << this->name <<"- Wub." << std::endl;
	std::cout << trap.getName() << "- Wub who?" << std::endl;
	std::cout << this->name <<"- Wubwubwubwubwub." << std::endl;
	std::cout << trap.getName() << "- ... You're dead to me." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << this->name << "- Do you want listen a joke " << trap.getName() << "? " << std::endl;
	std::cout << trap.getName() << "- ok.. shoot!" << std::endl;
	std::cout << this->name <<"- Knock Knock." << std::endl;
	std::cout << trap.getName() << "- Who's there?" << std::endl;
	std::cout << this->name <<"- Tat." << std::endl;
	std::cout << trap.getName() << "- Tat who?" << std::endl;
	std::cout << this->name <<"- Not until you're older." << std::endl;
	std::cout << trap.getName() << "- You are an idiot." << std::endl;
	std::cout << this->name << "- You wanna fight with me?! Put 'em up!.. Put 'em up?" << std::endl;
	std::cout << trap.getName() << "- NOOO!" << std::endl;
	std::cout << this->name << "- Ha ha, this is in no way surprising! Ha ha!" << std::endl;
	std::cout << trap.getName() << "- Fuck off!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
		std::cout << this->name << " finally see the ClapTrap " << trap.getName()
				<< " before falling on the ground." << std::endl;
		this->takeDamage(this->hitPoints + this->armorDamageReduction);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << std::endl;
	std::cout << this->name << " I'm the new one and better than FR4G and SC4V Now I will dominate!" << std::endl;
	std::cout << std::endl;
}
