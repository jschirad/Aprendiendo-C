/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:18:17 by marvin            #+#    #+#             */
/*   Updated: 2020/07/09 08:18:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		ft_error()
{
	std::cout<< "Error: null argument"<<std::endl;
	return (0);
}
int	main(int argc, char const **argv)
{
	std::string		s1;
	std::string		s2;
	std::string		buffer;
	std::string		output;
	std::string		filename;

	if (argc == 4)
	{
		s1 = argv[2];
		s2 = argv[3];
		filename = argv[1];
		if (s1 == "")
			return (ft_error());
		output = filename + ".replace";
		std::ifstream	readFile(filename);
		if (readFile.fail())
		{
			std::cout<< "Error: Operation file corrupted"<<std::endl;
			exit(1);
		}
		std::ofstream	outFile(output);
		if (outFile.fail())
		{
			std::cout<< "Error: Operation file corrupted"<<std::endl;
			exit(1);
		}
		while (std::getline(readFile, buffer))
		{
			while (buffer.find(s1) != std::string::npos)
				buffer.replace(buffer.find(s1), s1.length(), s2);
			outFile << buffer;
			outFile << std::endl;
		}
		readFile.close();
		outFile.close();
	}
	else
	{
		std::cout<<"Error: bad arguments"<<argv[0]<<std::endl;
		std::cout<<"try : file <string_1> <string_2> "<<std::endl;
	}
	return (0);
}
