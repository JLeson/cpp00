/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:29:23 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:11:53 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define MAX_CONTACTS	8
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[MAX_CONTACTS];
	int		_contact_insert_idx;
public:
	int		n_contacts;

	PhoneBook();
	~PhoneBook();
	void	insert_contact(std::string firstname, std::string lastname, std::string nickname,
							std::string phonenumber, std::string secret);
	Contact *get_contact(int idx);
};