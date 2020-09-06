/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vehiculo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 16:27:50 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 16:53:13 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "vehiculo.hpp"

vehiculo::vehiculo(std::string marca, std::string modelo, float precio)
{
	this->marca = marca;
	this->modelo = modelo;
	this->precio = precio;
}

vehiculo::vehiculo(){}

vehiculo::~vehiculo()
{
	std::cout <<"Free"<<std::endl;
}

float	vehiculo::getPrecio()
{
	return precio;
}

void	vehiculo::mostarDatos()
{
	std::cout<<"Marca : "<<marca<<std::endl;
	std::cout<<"Modelo : "<<modelo<<std::endl;
	std::cout<<"Precio : "<<precio<<std::endl;
}

int	vehiculo::masBarato(vehiculo coches[], int n)
{
	int	indice = 0;
	float	precio;

	precio = coches[0].getPrecio();
	for (int i = 1; i < n; i++)
	{
		if (coches[i].getPrecio() < precio)
		{
			precio = coches[i].getPrecio();
			indice = i;
		}
	}
	return (indice);
}
