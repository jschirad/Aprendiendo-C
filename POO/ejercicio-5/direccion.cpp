/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direccion.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:15:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:43:06 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "direccion.hpp"

direccion::direccion(std::string Direccion)
{
	this->Direccion = Direccion;
}

direccion::~direccion()
{
}

std::string direccion::getDireccion()
{
	return Direccion;
}
