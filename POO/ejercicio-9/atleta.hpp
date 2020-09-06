/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atleta.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 17:13:57 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 18:31:52 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATLETA_HPP
# define ATLETA_HPP

# include <iostream>
# include <string.h>

class atleta
{
private:
	int	numeroAtleta;
	std::string nombre;
	float	tiempoCarrera;
public:
	atleta(int numeroAtleta, std::string nombre, float tiempoCarrera);
	atleta();
	~atleta();

	float getTiempoAtleta();
	void mostrarDatos();
	static int indiceGanador(atleta atletas[], int n);
};

#endif
