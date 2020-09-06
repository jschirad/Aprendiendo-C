#ifndef BDAY_HPP
# define BDAY_HPP

# include <iostream>

class bday
{
private:
	int	day;
	int	month;
public:
	bday(int _day, int _month);
	~bday();

	bool equal(bday &d);
	void visual();
};

#endif
