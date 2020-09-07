/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:39:31 by marvin            #+#    #+#             */
/*   Updated: 2020/07/12 11:35:44 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main()
{
	int n;

	n = 6;
	if (n > 0)
	{
		std::cout<<"Horda de Zombis Arcoiris en camino !"<<std::endl;
		std::cout<<"---------------Horda----------------"<<std::endl;
		std::cout<<std::endl;
		ZombieHorde	arcoiris(n);
		arcoiris.announce();
		std::cout<<std::endl;
	}
	else
		std::cout<<"Prueba con un numero real."<<std::endl;
	return (0);
}
