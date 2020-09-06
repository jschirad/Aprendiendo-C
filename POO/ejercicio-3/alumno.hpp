/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alumno.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 10:45:14 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 11:15:12 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALUMNO_HPP
# define ALUMNO_HPP

# include <iostream>

class alumno
{
private:
	float	calMate;
	float	calProgra;
	float	promedio;
public:
	alumno();
	alumno(float _calMate, float _calProgra);
	~alumno();
	void	pedirDatos();
	void	mostrarNotas();
};


#endif
