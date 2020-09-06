#include <iostream>
#include "bday.hpp"
// Objetivo del ejercicio -> Objetos dinamicos y estaticos.
int	main()
{
	bday	*today;
	bday	*birthdate;
	int		d;
	int		m;

	std::cout << "Introduzca la fecha de hoy, Dia : " << std::endl;
	std::cin >> d;
	std::cout << "Introduzca el Mes : " << std::endl;
	std::cin >> m;
	today = new bday(d, m);

	std::cout << "Introduzca el DIA de su cumpleaños : " << std::endl;
	std::cin >> d;
	std::cout << "Introduzca el MES de su cumpleaños : " << std::endl;
	std::cin >> m;
	birthdate = new bday(d, m);

	today->visual();
	std::cout << std::endl;
	birthdate->visual();

	if (today->equal(*birthdate))
	{
		std::cout << "Feliz cumpleaños!" << std::endl;
	}
	else
	{
		std::cout << "sos boludo vo?" << std::endl;
	}

	return (0);
}
