/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 11:42:32 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/04 12:02:12 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "square.hpp"

int main()
{
	std::cout << "----- Trabajando de forma estatica-----" << std::endl;
	square cuadrado(5);
	square rectangulo(2, 3);

	cuadrado.getPerimetro();
	cuadrado.getArea();

	rectangulo.getPerimetro();
	rectangulo.getArea();

	std::cout << "----- Trabajando de forma dinamica -----" << std::endl;
	square *ob1;
	float lado1;
	float lado2;

	std::cout << "Digite el lado 1 : "<< std::endl;
	std::cin >> lado1;

	std::cout << "Digite el lado 2 : " << std::endl;
	std::cin >> lado2;

	if (lado1 == lado2)
	{
		ob1 = new square(lado1);
		std::cout << "Usted esta calculando un CUADRADO"<<std::endl;
	}
	else
	{
		ob1 = new square(lado1, lado2);
		std::cout << "Usted esta calculando un RECTANGULO" <<std::endl;
	}

	ob1->getPerimetro();
	ob1->getArea();
	delete ob1;
	return (0);
}
