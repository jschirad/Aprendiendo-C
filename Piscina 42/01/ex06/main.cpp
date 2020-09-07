/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:56:27 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 10:56:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon clubB = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(clubB);
	jim.attack();
	clubB.setType("some other type of club");
	jim.attack();

	return (0);
}
