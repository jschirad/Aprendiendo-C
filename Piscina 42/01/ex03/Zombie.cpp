/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:43:17 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 09:43:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <random>
#include <string>

Zombie::Zombie()
{
	this->type = "";
	this->name = "";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
};

Zombie::~Zombie()
{
	std::cout<<"Destroyed zombie"<<std::endl;
};

std::string	Zombie::get_name()
{
	return (this->name);
}

std::string	Zombie::get_type()
{
	return (this->type);
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void	Zombie::settype(std::string	type)
{
	this->type = type;
}

void	Zombie::announce()
{
	std::cout<<"<"<<name<<" ("<<type<<")> Braiiiiiiinnnssss... "<<std::endl;
}
