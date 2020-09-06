/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estatico.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:39:30 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/04 10:02:55 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "estatico.hpp"

int	Estatico::contador = 0; // Inicializamos el valor del atributo estatico.

Estatico::Estatico()
{
	contador++;
}

Estatico::~Estatico()
{
	std::cout << "Destructor apply" << std::endl;
}

int	Estatico::getContador()
{
	return contador;
}

int Estatico::sumar(int n1, int n2)
{
	int suma = n1 + n2;
	return suma;
}
