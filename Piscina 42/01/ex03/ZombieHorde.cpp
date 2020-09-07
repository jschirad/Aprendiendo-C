/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 08:23:35 by marvin            #+#    #+#             */
/*   Updated: 2020/07/09 10:04:12 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int nb)
{
	if (nb > 0)
	{
		int	random;

		this->zombies = new Zombie[nb];
		this->_number = nb;
		srand(time(NULL));

		std::string name_list[5] = {"Facu", "Roberto", "Rodolfo", "Miguel", "Jesus"};
		std::string	type_list[5] = {"Rojo", "Amarillo", "Azul", "Negro", "Verde"};
		for (int i = 0; i < nb; i++)
		{
			random = rand() % 5;
			this->zombies[i].setname(name_list[random]);
			this->zombies[i].settype(type_list[random]);
		}
	}
	else
		std::cout<<"Mamon, pon un numero real."<<std::endl;
}

ZombieHorde::~ZombieHorde()
{
	std::cout<<"Destroying the horde!"<<std::endl;
	delete [] zombies;
}

void	ZombieHorde::announce()
{
	int	j = 0;
	while (j < this->_number)
	{
		zombies[j].announce();
		j++;
	}
}
