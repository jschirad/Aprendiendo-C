/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:20:01 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 10:59:47 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	std::cout << "|----- Probando FragTrap -----|" << std::endl;
	FragTrap Robot1("[R-42]");
	srand(time(NULL));
	Robot1.vaulthunter_dot_exe("CL4P-TP");
	Robot1.meleeAttack("CL4P-TP");
	Robot1.rangedAttack("CL4P-TP");
	Robot1.takeDamage(24);
	Robot1.beRepaired(50);
	Robot1.takeDamage(42);
	Robot1.takeDamage(100);
	Robot1.beRepaired(125);
	Robot1.vaulthunter_dot_exe("CL4P-TP");
	Robot1.vaulthunter_dot_exe("CL4P-TP");
	Robot1.vaulthunter_dot_exe("CL4P-TP");
	Robot1.vaulthunter_dot_exe("CL4P-TP");
	std::cout << std::endl;

	std::cout << "|----- Probando ScavTrap -----|" << std::endl;
	ScavTrap Robot2("[BB-8]");
	Robot2.challengeNewcomer();
	Robot2.meleeAttack("CL4P-TP");
	Robot2.rangedAttack("CL4P-TP");
	Robot2.takeDamage(24);
	Robot2.beRepaired(50);
	Robot2.takeDamage(42);
	Robot2.takeDamage(100);
	Robot2.beRepaired(125);
	Robot2.challengeNewcomer();
	Robot2.challengeNewcomer();
	Robot2.challengeNewcomer();
	Robot2.challengeNewcomer();
	std::cout << std::endl;
	return (0);
}
