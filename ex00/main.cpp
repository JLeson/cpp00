/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:29:06 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/04/13 15:39:49 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string	arg = *(argv + i);
		for (unsigned int c = 0; c < arg.length(); c++)
		{
			std::cout << (char)toupper(arg[c]);
		}
	}
	std::cout << std::endl;
	return (0);	
}
