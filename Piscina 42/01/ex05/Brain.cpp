/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:13:19 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 11:13:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain()
{
	setAddress();
	return ;
};

Brain::~Brain(){};

void	Brain::setAddress()
{
	std::stringstream	buffer;

	buffer << this;
	this->address = buffer.str();
	return ;
}

std::string	Brain::identify()
{
	return (this->address);
}
