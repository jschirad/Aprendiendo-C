/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudiante.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:30:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:38:24 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "estudiante.hpp"

Estudiante::Estudiante(std::string codigo, float promedio, int numeroExp, std::string Direccion) : exp(numeroExp), dir(Direccion)
{
	this->codigo = codigo;
	this->promedio = promedio;
}

Estudiante::~Estudiante(){}

void	Estudiante::mostarDatos()
{
	std::cout << "Codigo : "<<codigo<<std::endl;
	std::cout << "Promedio : "<<promedio<<std::endl;
	std::cout << "Numero de Expediente : " <<exp.getExpediente() << std::endl;
	std::cout << "Direccion : "<<dir.getDireccion() << std::endl;
}
