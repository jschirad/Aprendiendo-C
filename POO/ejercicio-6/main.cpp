/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:40:51 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/04 10:06:07 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "estatico.hpp"

int main()
{
	Estatico *obj1 = new Estatico();
	Estatico *obj2 = new Estatico();
	Estatico *obj3 = new Estatico();

	std::cout << "Contador : "<<obj1->getContador()<<"" << std::endl;
	std::cout << "Suma 4 + 5 = "<<obj1->sumar(4, 5)<<"" << std::endl;
	std::cout << "Suma 1 + 2 = "<<Estatico::sumar(1, 2)<<"" << std::endl;

	delete obj1;
	delete obj2;
	delete obj3;
}
