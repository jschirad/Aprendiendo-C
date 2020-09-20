/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:20:01 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 17:17:49 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int	main()
{
	std::cout << "| ----- FRAGTRAP ----- |" << std::endl;
	FragTrap *robot1 = new FragTrap("[RB-42]");
	srand(time(NULL));
	robot1->vaulthunter_dot_exe("CL4P-TP");
	robot1->meleeAttack("CL4P-TP");
	robot1->rangedAttack("CL4P-TP");
	robot1->takeDamage(24);
	robot1->beRepaired(50);
	robot1->takeDamage(42);
	robot1->takeDamage(100);
	robot1->beRepaired(125);
	robot1->vaulthunter_dot_exe("CL4P-TP");
	robot1->vaulthunter_dot_exe("CL4P-TP");
	robot1->vaulthunter_dot_exe("CL4P-TP");
	robot1->vaulthunter_dot_exe("CL4P-TP");
	std::cout << std::endl;

	std::cout << "| ----- SCAVTRAP ----- |" << std::endl;
	ScavTrap *robot2 = new ScavTrap("[BB-8]");
	robot2->challengeNewcomer();
	robot2->meleeAttack("CL4P-TP");
	robot2->rangedAttack("CL4P-TP");
	robot2->takeDamage(24);
	robot2->beRepaired(50);
	robot2->takeDamage(42);
	robot2->takeDamage(100);
	robot2->beRepaired(125);
	robot2->challengeNewcomer();
	robot2->challengeNewcomer();
	robot2->challengeNewcomer();
	robot2->challengeNewcomer();
	std::cout << std::endl;

	std::cout << "| ----- NINJATRAP ----- |" << std::endl;
	ClapTrap robot("[CL4P]");
	NinjaTrap	*ninja = new NinjaTrap("[NJ-13]");
	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("CL4P-TP");
	ninja->rangedAttack("CL4P-TP");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	std::cout << std::endl;
	std::cout << "| ----- NINJA && FRAG ----- |" << std::endl;
	ninja->ninjaShoebox(*robot1);
	std::cout << std::endl;
	std::cout << "| ----- NINJA && SCAV ----- |" << std::endl;
	ninja->ninjaShoebox(*robot2);
	std::cout << std::endl;
	std::cout << "| ----- NINJA && CL4P ----- |" << std::endl;
	ninja->ninjaShoebox(robot);
	std::cout << std::endl;

	std::cout << "| ----- FREE MEMORY ----- |" << std::endl;
	delete robot1;
	delete robot2;
	delete ninja;
	return (0);
}
