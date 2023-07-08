/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:13:19 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:30:27 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awsomephonebook.hpp"

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
	int	idx;

	std::cout << "Enter contact index:" << std::endl;
	std::cin >> idx;
	if (idx >= MAX_CONTACTS || idx >= phonebook->n_contacts)
	{
		std::cout << INVALID_INDEX_ERR_MSG << std::endl;
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
	}
	return (0);
}
