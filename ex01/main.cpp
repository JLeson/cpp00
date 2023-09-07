/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:13:19 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 15:30:06 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awsomephonebook.hpp"
#include <unistd.h>

static void	insert_field(std::string prompt, std::string *dest)
{
	std::cout << prompt << std::endl;
	std::cin >> *dest;
	if ((*dest).empty())
	{
		std::cout << EMPTY_FIELD_ERR_MSG << std::endl;
		insert_field(prompt, dest);
	}
}

static void	add(PhoneBook *phonebook)
{
	std::string	firstname;
	std::string	lastname;
	std::string nickname;
	std::string	phonenumber;
	std::string	secret;

	insert_field("Enter firstname:", &firstname);
	insert_field("Enter lastname:", &lastname);
	insert_field("Enter nickname:", &nickname);
	insert_field("Enter phonenumber:", &phonenumber);
	insert_field("Enter secret:", &secret);
	phonebook->insert_contact(firstname, lastname, nickname, phonenumber, secret);
}

static void	search(PhoneBook *phonebook)
{	
	std::string	input;
	int			idx;

	std::cout << "Enter contact index:" << std::endl;
	std::cin >> idx;
	std::cout << idx << std::endl;
	if (idx >= MAX_CONTACTS || idx >= phonebook->get_n_contacts() || idx < 0 || !std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cerr << INVALID_INDEX_ERR_MSG << std::endl;
		return ;
	}
	phonebook->get_contact(idx)->print_contact();
}

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cin >> command;
		if (command == EXIT_CMD)
			return (0);
		else if (command == ADD_CMD)
			add(&phonebook);
		else if (command == SEARCH_CMD)
		{
			phonebook.print_contacts();
			search(&phonebook);
		}
		else
			std::cerr << INVALID_CMD_ERR_MSG << std::endl;
	}
	return (0);
}
