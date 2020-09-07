/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 10:40:43 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 10:47:45 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pony.hpp"

pony::pony()
{
	std::cout << "Your pony is alive!" << std::endl;
}

pony::~pony()
{
	std::cout << "Your pony was destroyed!" << std::endl;
}

void	pony::getPony(std::string name, std::string color, int age)
{
	this->name = name;
	std::cout << "My name is "<<this->name<<" and I wanna kill you!" << std::endl;

	this->color = color;
	std::cout << "Look at my sensual "<<this->color<<" body!" <<std::endl;

	this->age = age;
	std::cout << "I'm "<<this->age<<" years old!" << std::endl;
}
