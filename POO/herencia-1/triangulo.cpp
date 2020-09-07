/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangulo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 12:03:32 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 12:14:52 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "triangulo.hpp"
# include <math.h>


triangulo::triangulo(int lados, float lado1, float lado2, float lado3) : Figura(lados)
{
	this->lado1 = lado1;
	this->lado2 = lado2;
	this->lado3 = lado3;
}

triangulo::~triangulo()
{
}

float	triangulo::areaTriangulo()
{
	float	p = (lado1 + lado2 + lado3)/2;
	float area = sqrt(p*(p - lado1)*(p-lado2)*(p-lado3));
	return (area);
}
