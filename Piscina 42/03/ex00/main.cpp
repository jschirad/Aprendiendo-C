/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:20:01 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 12:54:51 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main()
{
	std::cout << "| ----- FRAGTRAP ----- |" << std::endl;
	srand(time(NULL));
	FragTrap robot1("[R-42]");
	robot1.vaulthunter_dot_exe("CL4P-TP");
	robot1.meleeAttack("CL4P-TP");
	robot1.rangedAttack("CL4P-TP");
	robot1.takeDamage(24);
	robot1.beRepaired(50);
	robot1.takeDamage(42);
	robot1.takeDamage(100);
	robot1.beRepaired(125);
	robot1.vaulthunter_dot_exe("CL4P-TP");
	robot1.vaulthunter_dot_exe("CL4P-TP");
	robot1.vaulthunter_dot_exe("CL4P-TP");
	robot1.vaulthunter_dot_exe("CL4P-TP");
	std::cout << std::endl;
	return (0);
}
