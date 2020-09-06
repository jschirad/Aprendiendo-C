/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perro.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:51:52 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:05:13 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "perro.hpp"

perro::perro(std::string nombre, std::string raza)
{
	this->nombre = nombre;
	this->raza = raza;
}

perro::~perro()
{
	std::cout << ""<<nombre<<" murio" << std::endl;
}

void	perro::mostrarDatos()
{
	std::cout <<"Nombre : "<<nombre<< std::endl;
	std::cout <<"Raza : "<<raza<< std::endl;
}

void	perro::jugar()
{
	std::cout<< "Tu perro "<<raza<<" esta jugando con un petardo."<<std::endl;
}
