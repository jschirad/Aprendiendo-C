/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudiante.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:26:34 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:41:34 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ESTUDIANTE_HPP
# define ESTUDIANTE_HPP

#include <iostream>
#include "expediente.hpp"
#include "direccion.hpp"

class	Estudiante{
	private:
		std::string	codigo;
		float		promedio;
		expediente	exp;
		direccion	dir;

	public:
		Estudiante(std::string codigo, float promedio, int numeroExp, std::string Direccion);
		~Estudiante();

		void mostarDatos();
};

#endif
