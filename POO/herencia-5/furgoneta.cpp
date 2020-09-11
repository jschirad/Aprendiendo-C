/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   furgoneta.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:05:03 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 12:11:40 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "furgoneta.hpp"

furgoneta::furgoneta(std::string marca, std::string color, std::string modelo, int carga) : vehiculo(marca, color, modelo)
{
	this->carga = carga;
}

furgoneta::~furgoneta()
{}

int	furgoneta::getCarga()
{
	return carga;
}

std::string	furgoneta::retornarMarca()
{
	std::string nombre = getMarca();
	return nombre;
}
