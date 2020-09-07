/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 10:00:42 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 10:02:48 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClassContact.hpp"

void	startmenu()
{
	std::cout<<"|-------------------------------------------|"<<std::endl;
	std::cout<<"|------WELCOME TO YOUR POOR DIRECTORY-------|"<<std::endl;
	std::cout<<"|-------------------------------------------|"<<std::endl;
	std::cout<< "> The available commands are : "<<std::endl;
	std::cout<< "> [ADD] a contact "<<std::endl;
	std::cout<< "> [SEARCH] a contact "<<std::endl;
	std::cout<< "> [EXIT] and clean data "<<std::endl;
	std::cout<<"|-------------------------------------------|"<<std::endl;
	std::cout<<std::endl;
}

void	search_contact(Contact phonebook[], int nb)
{
	int		index;

	std::cout<<"> Enter the index of a contact : ";
	std::cin>>index;
	std::cout<<std::endl;
	if (index >= 0 && index < nb)
		phonebook[index].getContact();
	else
	{
		std::cin.clear();
		std::cout<<"------>> Index not found, try again."<<std::endl;
		std::cout<<"\n";
		search_contact(phonebook, nb);
	}
}

std::string	short_word(std::string word)
{
	word = word.erase((10 - 1), word.length() - (10 - 1));
	word.append(".");
	return (word);
}

void	show_contacts(Contact phonebook[], int nbr_index)
{
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;

	std::cout<<std::setw(10);
	std::cout<<"------------|  PHONEBOOK v1.0  |-------------"<<std::endl;
	std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
	for (int i = 0; i < nbr_index; i++)
	{
		_first_name = phonebook[i].get_firstname();
		_last_name = phonebook[i].get_lastname();
		_nickname = phonebook[i].get_nickname();

		std::cout<<"|"<<std::setw(10)<<i;
		_first_name = (_first_name.length() > 10) ? short_word(_first_name) : _first_name;
		std::cout<<"|"<<std::setw(10)<<_first_name;

		_last_name = (_last_name.length() > 10) ? short_word(_last_name) : _last_name;
		std::cout<<"|"<<std::setw(10)<<_last_name;

		_nickname = (_nickname.length() > 10) ? short_word(_nickname) : _nickname;
		std::cout<<"|"<<std::setw(10)<<_nickname;
		std::cout<<"|"<<std::endl;
	}
	std::cout<<"---------------------------------------------"<<std::endl;
	search_contact(phonebook, nbr_index);
}

int	main(void)
{
	int			index;
	Contact		phonebook[8];
	std::string	command;

	startmenu();
	index = 0;
	while (1)
	{
		std::cout<<"> ";
		getline(std::cin, command, '\n');
		if (command == "ADD" || command == "add")
		{
			if (index < 8)
				phonebook[index++].setContact();
			else
			{
				std::cout<< "------------------------------------------------"<<std::endl;
				std::cout<< "Your Phonebook is full ! Exit to clean data. "<<std::endl;
				std::cout<< "------------------------------------------------"<<std::endl;
			}
		}
		else if (command == "SEARCH" || command == "search")
		{
			if (index > 0)
				show_contacts(phonebook, index);
			else
			{
				std::cout<< "---------------------------------------------------"<<std::endl;
				std::cout<< "Your Phonebook is empty. Please ADD a new contact."<<std::endl;
				std::cout<< "---------------------------------------------------"<<std::endl;
			}
		}
		else if (command == "EXIT" || command == "exit")
		{
				std::cout<< "------------------------------------------------"<<std::endl;
				std::cout<< "Why are you do that :( ."<<std::endl;
				std::cout<< "------------------------------------------------"<<std::endl;
				break ;
		}
	}
	return (0);
}
