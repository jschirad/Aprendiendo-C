/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:39:31 by marvin            #+#    #+#             */
/*   Updated: 2020/07/10 10:07:22 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int	main()
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		zombie3;
	ZombieEvent	event;

	std::cout<<"|------ EVENT 1--------|"<<std::endl;
	event.setZombieType("Azul");
	zombie1 = event.randomChump();
	zombie1->announce();
	delete zombie1;

	std::cout<<"|------ EVENT 2--------|"<<std::endl;
	event.setZombieType("Rojo");
	zombie2 = event.randomChump();
	zombie2->announce();
	delete zombie2;

	std::cout<<"|------ EVENT 3--------|"<<std::endl;
	zombie3.setType("verde");
	zombie3.setName("Jorge");
	zombie3.announce();

	return (0);

}
