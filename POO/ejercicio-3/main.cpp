/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 10:55:53 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 11:21:43 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Objetivo del ejercicio -> Arreglo de Objetos

#include <iostream>
#include "alumno.hpp"

int main()
{
	alumno *alumnos2 = new alumno[3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Notas del alumno [" << i << "] : " << std::endl;
		(alumnos2+i)->pedirDatos();
		std::cout<<std::endl;
	}

	std::cout << "Las calificaciones son : " <<std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Notas del alumno [" << i << "] : " << std::endl;
		(alumnos2+i)->mostrarNotas();
		std::cout << std::endl;
	}
	return (0);
}
