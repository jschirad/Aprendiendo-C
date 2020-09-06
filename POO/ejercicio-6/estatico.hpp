/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estatico.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:35:30 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/04 10:01:13 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ESTATICO_HPP
# define ESTATICO_HPP

# include <iostream>
# include <string.h>

class	Estatico{
	private:
		static int	contador; // un atributo estatico es como crear una variable global. El valor no cambia
		std::string	nombre;

	public:
		Estatico();
		~Estatico();
		int	getContador();
		static int sumar(int n1, int n2);
};

#endif
