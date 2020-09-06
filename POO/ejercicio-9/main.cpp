/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:15:27 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 18:37:36 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "atleta.hpp"

int	main()
{
	atleta *atletas;
	int numeroAtletas;
	int	numeroAtleta;
	int	indiceAtleta;
	std::string	nombre;
	float tiempoCarrera;

	std::cout << "Digite el numero de Atletas que participaron : "<<std::endl;
	std::cin>>numeroAtletas;

	atletas = new atleta[numeroAtletas];
	for (int i = 0; i < numeroAtletas; i++)
	{
		std::cout<< "Dgite los datos del Atleta numero ["<<(i+1)<<"]"<<std::endl;

		std::cout<<"Nombre :";
		std::cin>>nombre;
		std::cout<<"Numero :";
		std::cin>>numeroAtleta;
		std::cout<<"Tiempo de Carrera :";
		std::cin>>tiempoCarrera;

		atletas[i] = atleta(numeroAtleta, nombre, tiempoCarrera);
	}

	indiceAtleta = atleta::indiceGanador(atletas, numeroAtletas);
	std::cout<<"| --- EL GANADOR ES ----- |" <<std::endl;
	(atletas+indiceAtleta)->mostrarDatos();
	return (0);
}
