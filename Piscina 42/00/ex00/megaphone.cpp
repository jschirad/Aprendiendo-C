/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:58:22 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 21:08:29 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stdlib.h>
# include <string.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int	main(int argc, char const **argv)
{
	int	i;

	if (argc == 1)
		std::cout << " * LOUD AND UNBREARABLE FEEDBACK NOISE * " <<std::endl;
	else
	{
		for (i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (int j = 0; j < str.length(); j++)
				std::cout << (char)ft_toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
