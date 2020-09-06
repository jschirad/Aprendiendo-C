/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atleta.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:11:21 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 18:31:49 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "atleta.hpp"

atleta::atleta(int numeroAtleta, std::string nombre, float tiempoCarrera)
{
	this->nombre = nombre;
	this->numeroAtleta = numeroAtleta;
	this->tiempoCarrera = tiempoCarrera;
}

atleta::atleta(){
}

atleta::~atleta(){
}

float	atleta::getTiempoAtleta()
{
	return tiempoCarrera;
}

void	atleta::mostrarDatos()
{
	std::cout<< "Nombre del Atleta :"<<nombre<<std::endl;
	std::cout<< "Numero de atleta :"<<numeroAtleta<<std::endl;
	std::cout<< "Tiempo de carrera :"<<tiempoCarrera<<std::endl;
}

int		atleta::indiceGanador(atleta atletas[], int n)
{
	float tiempoCarrera;
	int indice = 0;

	tiempoCarrera = atletas[0].getTiempoAtleta();
	for (int i = 1; i < n; i++)
	{
		if (atletas[i].getTiempoAtleta() < tiempoCarrera)
		{
			tiempoCarrera = atletas[i].getTiempoAtleta();
			indice = i;
		}
	}
	return indice;
}
