/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:03:42 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 11:27:04 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "turismo.hpp"
#include "deportivo.hpp"

int main()
{
	std::cout << "Herencia Publica" << std::endl;
	turismo *t1 = new turismo("Audi", "Blanco", "A1", 3);
	std::cout << "Marca : " << t1->getMarca() << std::endl;
	std::cout << "Color : " << t1->getColor() << std::endl;
	std::cout << "Modelo : " << t1->returnModelo() << std::endl;
	std::cout << "Numero de Puertas : " << t1->getNumeroPuertas() << std::endl;
	delete t1;

	return (0);
}
