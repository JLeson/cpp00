/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:29:23 by joel              #+#    #+#             */
/*   Updated: 2023/07/12 15:38:22 by fsarkoh          ###   ########.fr       */
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
	int		_n_contacts;
public:
	PhoneBook();
	~PhoneBook();
	void	print_contacts(void);
	int		get_n_contacts(void);
	void	insert_contact(std::string firstname, std::string lastname, std::string nickname,
							std::string phonenumber, std::string secret);
	Contact *get_contact(int idx);
};
