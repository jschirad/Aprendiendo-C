/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perro.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:22:03 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 11:57:12 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERRO_HPP
# define PERRO_HPP

# include <iostream>
# include <string.h>

class perro
{
private:
	std::string	nombre;
	std::string	raza;
public:
	perro(std::string _nombre, std::string _raza);
	~perro();

	void	mostrarDatos();
	void	jugar();
};

#endif
