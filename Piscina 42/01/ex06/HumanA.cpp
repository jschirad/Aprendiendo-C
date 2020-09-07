/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:29:56 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 10:29:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon):
	weapon(weapon), name(name)
{
}

HumanA::~HumanA(){};

void	HumanA::attack()
{
	std::cout << this->name << " attack with his "<<this->weapon.getType()<<std::endl;
}
