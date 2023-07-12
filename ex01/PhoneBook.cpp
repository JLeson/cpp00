/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:29:18 by joel              #+#    #+#             */
/*   Updated: 2023/07/12 15:38:13 by fsarkoh          ###   ########.fr       */
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
	this->_n_contacts = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::print_contacts(void)
{
	std::cout << std::endl;
	std::cout << "PHONEBOOK CONTACTS" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "         #|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	for (int i = 0; i < this->_n_contacts; i++)
	{
		std::cout << std::setw(10) << i << "|" << std::flush;
		std::cout << std::setw(10) << truncate(this->_contacts[i].get_firstname()) << "|" << std::flush;
		std::cout << std::setw(10) << truncate(this->_contacts[i].get_lastname()) << "|" << std::flush;
		std::cout << std::setw(10) << truncate(this->_contacts[i].get_nickname()) << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

int		PhoneBook::get_n_contacts(void)
{
	return this->_n_contacts;
}

void	PhoneBook::insert_contact(std::string firstname, std::string lastname, std::string nickname,
			std::string phonenumber, std::string secret)
{
	Contact *current_contact;

	current_contact = &(this->_contacts[this->_contact_insert_idx]);
	current_contact->set_contact(firstname, lastname, nickname, phonenumber, secret);
	this->_contact_insert_idx = (this->_contact_insert_idx + 1) % MAX_CONTACTS;
	if (_n_contacts < 8)
		_n_contacts++;
}

Contact *PhoneBook::get_contact(int idx)
{
	return (&(this->_contacts[idx]));
}
