/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:13:25 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 11:13:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){};

Human::~Human(){};

Brain	Human::getBrain()
{
	return (this->brain);
}

std::string	Human::identify()
{
	return (this->brain.identify());
}
