/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clasederivada.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:08:56 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 15:11:09 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clasederivada.hpp"

clasederivada::clasederivada(int numero, int numero2) : clasebase(numero)
{
	this->numero2 = numero2;
	std::cout << "Construyendo clase derivada." <<std::endl;
}

clasederivada::~clasederivada()
{
	std::cout << "Destruyendo clase derivada" << std::endl;
}
