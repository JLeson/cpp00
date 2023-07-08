/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:29:18 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:46:26 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awsomephonebook.hpp"

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return str;
}

PhoneBook::PhoneBook() 
{
	this->_contact_insert_idx = 0;	
	this->n_contacts = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::print_contacts(void)
{
	std::cout << std::endl;
	std::cout << "PHONEBOOK CONTACTS" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "         #|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	for (int i = 0; i < this->n_contacts; i++)
	{
		std::cout << std::setw(10) << i << "|" << std::flush;
		std::cout << std::setw(10) << truncate(this->_contacts[i].firstname) << "|" << std::flush;
		std::cout << std::setw(10) << truncate(this->_contacts[i].lastname) << "|" << std::flush;
		std::cout << std::setw(10) << truncate(this->_contacts[i].nickname) << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::insert_contact(std::string firstname, std::string lastname, std::string nickname,
			std::string phonenumber, std::string secret)
{
	Contact *current_contact;

	current_contact = &(this->_contacts[this->_contact_insert_idx]);
	current_contact->set_contact(firstname, lastname, nickname, phonenumber, secret);
	this->_contact_insert_idx = (this->_contact_insert_idx + 1) % MAX_CONTACTS;
	if (n_contacts < 8)
		n_contacts++;
}

Contact *PhoneBook::get_contact(int idx)
{
	return (&(this->_contacts[idx]));
}
