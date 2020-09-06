/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 11:37:05 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/04 11:42:17 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "square.hpp"

square::square(float lado1, float lado2)
{
	this->lado1 = lado1;
	this->lado2 = lado2;
}

square::square(float lado1)
{
	this->lado1 = lado1;
	this->lado2 = lado1;
}

square::~square()
{
	std::cout << "Everything was destroy"<< std::endl;
}

void	square::getPerimetro()
{
	int perimetro = (lado1 * 2)+ (lado2 * 2);
	std::cout << "El perimetro del cuadrilatero es : "<<perimetro<<"" << std::endl;
}

void	square::getArea()
{
	int area = lado1*lado2;
	std::cout << "El area del cuadrilatero es : "<<area<<"" << std::endl;
}
