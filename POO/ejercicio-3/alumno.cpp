/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alumno.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 10:55:15 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 11:18:17 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "alumno.hpp"

alumno::alumno(){}

alumno::alumno(float _calMate, float _calProgra)
{
	calMate = _calMate;
	calProgra = _calProgra;
}

alumno::~alumno()
{
	std::cout << "Alumno muere"<< std::endl;
}

void	alumno::pedirDatos()
{
	std::cout << "Digite la calificacion de Matematicas" << std::endl;
	std::cin >> calMate;
	std::cout << "Digite la calificacion de Programacion" << std::endl;
	std::cin >> calProgra;
}

void	alumno::mostrarNotas()
{
	std::cout << "Nota de Matematicas : " <<calMate<< std::endl;
	std::cout << "Nota de Programacion : " <<calProgra<< std::endl;
	promedio = (calMate + calProgra)/2;
	std::cout << "Promedio de Calificaciones : " <<promedio<< std::endl;
}
