/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 16:32:45 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 17:05:51 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vehiculo.hpp"
#include <iostream>
#include <string.h>

int main()
{
	vehiculo *coches;
	int	numeroVehiculos;
	int	masBarato;
	std::string	marca;
	std::string modelo;
	float	precio;

	std::cout<<"Digite el numero de Vehiculos : ";
	std::cin>>numeroVehiculos;

	coches = new vehiculo[numeroVehiculos];
	for (int i = 0; i < numeroVehiculos; i++)
	{
		std::cout<< "Digite los datos del vehiculo "<<(i+1)<<" ";
		std::cout<<std::endl;
		std::cout<< "Digite la Marca : ";
		std::cin>>marca;
		std::cout<< "Digite el Modelo : ";
		std::cin>>modelo;
		std::cout<< "Digite el precio : ";
		std::cin>>precio;
		coches[i] = vehiculo(marca, modelo, precio);
		std::cout<<std::endl;
	}
	masBarato = vehiculo::masBarato(coches, numeroVehiculos);
	std::cout<< "El vehiculo mas barato es : "<<std::endl;
	(coches+masBarato)->mostarDatos();
	//coches[masBarato].mostarDatos();
	delete[]	coches;

	return (0);
}
