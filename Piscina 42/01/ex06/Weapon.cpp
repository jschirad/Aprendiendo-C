/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:20:59 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 10:20:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string	const &type)
{
	setType(type);
}

Weapon::~Weapon(){};

void	Weapon::setType(std::string	const &type)
{
	this->type = type;
}

std::string	const &Weapon::getType() const
{
	return (this->type);
}
