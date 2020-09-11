/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deportivo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:07:45 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 11:32:15 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deportivo.hpp"
#include <iostream>

deportivo::deportivo(std::string marca, std::string color, std::string modelo, int cilindrada) : vehiculo(marca, color, modelo)
{
	this->cilindrada = cilindrada;
}

deportivo::~deportivo()
{}

int	deportivo::getCilindros()
{
	return cilindrada;
}

std::string	deportivo::retornarMarca()
{
	std::string mark = getMarca();
	return mark;
}

std::string deportivo::retornarModelo()
{
	std::string model = getModelo();
	return model;
}
