/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clasebase.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:04:32 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 15:11:22 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clasebase.hpp"

clasebase::clasebase(int numero)
{
	this->numero = numero;
	std::cout << "Constructor Clase Base en ejecucion."<< std::endl;
}

clasebase::~clasebase()
{
	std::cout << "Destruyendo clase base." << std::endl;
}
