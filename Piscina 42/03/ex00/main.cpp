/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:20:01 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 14:27:53 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main()
{
	srand(time(NULL));
	FragTrap Robot1("[R-42]");
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
	return (0);
}
