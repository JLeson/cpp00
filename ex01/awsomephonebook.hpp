/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awsomephonebook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:12:46 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 14:46:00 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include "Contact.hpp"
#include "PhoneBook.hpp"

#define	EXIT_CMD		"EXIT"
#define	ADD_CMD			"ADD"
#define	SEARCH_CMD		"SEARCH"

#define EMPTY_FIELD_ERR_MSG	"Field can not be empty"
#define INVALID_INDEX_ERR_MSG "Invalid index"
#define INVALID_CMD_ERR_MSG	"Invalid command"
