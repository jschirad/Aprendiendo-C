#include <iostream>
#include "bday.hpp"
#include <string>

bday::bday(int _day, int _month)
{
	day = _day;
	month = _month;
}

bday::~bday()
{
	std::cout << "Class was destroyed" << std::endl;
}

bool	bday::equal(bday &d)
{
	if (day == d.day && month == d.month)
		return true;
	else
		return false;
}

void	bday::visual()
{
	std::string mes[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
	std::cout << "Mostrando los datos..." << std::endl;
	std::cout << "Mes : " << mes[month - 1] << std::endl;
	std::cout << "Dia : " << day << std::endl;
}
