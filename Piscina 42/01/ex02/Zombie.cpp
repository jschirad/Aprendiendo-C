/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:43:17 by marvin            #+#    #+#             */
/*   Updated: 2020/07/10 09:43:52 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	this->type = "";
	this->name = "";
}

Zombie::Zombie(std::string _name, std::string _type)
{
	this->name = _name;
	this->type = _type;
};

Zombie::~Zombie()
{
	std::cout<<std::endl;
	std::cout<<"Your zombi was destroyed"<<std::endl;
	std::cout<<std::endl;
};

std::string	Zombie::getName()
{
	return (this->name);
}

std::string	Zombie::getType()
{
	return (this->type);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}

void	Zombie::announce()
{
	std::cout<<std::endl;
	std::cout<<"<"<<name<<" ("<<type<<")> Braiiiiiiinnnssss... "<<std::endl;
}
