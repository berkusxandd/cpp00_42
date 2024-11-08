/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:45:40 by bince             #+#    #+#             */
/*   Updated: 2024/11/08 14:45:41 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
	}
    for (int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j]; j++)
		{
			argv[i][j] = std::toupper(argv[i][j]);
		}
		std::cout << argv[i];
	}
	std::cout << std::endl;
}
