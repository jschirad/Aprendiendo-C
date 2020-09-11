/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vehiculo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:56:30 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 10:08:34 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vehiculo.hpp"

vehiculo::vehiculo(std::string marca, std::string color, std::string modelo)
{
	this->marca = marca;
	this->color = color;
	this->modelo = modelo;
}

vehiculo::~vehiculo()
{}

std::string vehiculo::getMarca()
{
	return marca;
}

std::string vehiculo::getColor()
{
	return color;
}

std::string vehiculo::getModelo()
{
	return modelo;
}
