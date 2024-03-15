/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:16:08 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 15:57:55 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ostream>
#include <string.h>

#define COLOR_RED     "\033[1;31m"
#define COLOR_ORANGE  "\033[1;38;5;208m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_WHITE   "\033[1;37m"
#define COLOR_GRAY    "\033[1;30m"
#define COLOR_RESET   "\033[0m"

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << COLOR_YELLOW << "To run try like: <./strReplace> <filename> <s1> <s2> (of course, without the angle brackets)" << COLOR_RESET << std::endl;
		return 0;
	}
	std::fstream fd1(av[1]);
	if (!fd1.is_open())
	{
		std::cout << COLOR_RED << "Error opening the file named " << COLOR_WHITE << av[1] << COLOR_RESET << std::endl;
		return 1;
	}
	std::string fileContent = "";
	char c;
	while (fd1.get(c))
		fileContent.append(std::string (1, c));
	std::string tmp = av[1];
	tmp = tmp + ".replace";
	std::ofstream fd2(tmp.c_str());
	if (!fd2.is_open())
	{
		std::cout << COLOR_RED << "Error opening the file named " << COLOR_WHITE << tmp << COLOR_RESET << std::endl;
		return 1;
	}
	size_t pos = 0;
	while ((pos = fileContent.find(av[2])) != std::string::npos)
	{
		fileContent.erase(pos, strlen(av[2]));
		fileContent.insert(pos, av[3]);
		pos += strlen(av[3]);
	}
	fd2 << fileContent;
	fd1.close();
	fd2.close();
	return 0;
}