/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:02:43 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 15:44:51 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define COLOR_RED     "\033[1;31m"
#define COLOR_ORANGE  "\033[1;38;5;208m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_WHITE   "\033[1;37m"
#define COLOR_GRAY    "\033[1;30m"
#define COLOR_RESET   "\033[0m"

int main(void)
{

	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << COLOR_GRAY <<"string memory address: " << &string << COLOR_RESET << std::endl;
	std::cout << COLOR_GRAY <<"stringPTR memory address: " << stringPTR << COLOR_RESET << std::endl;
	std::cout << COLOR_GRAY <<"stringREF memory address: " << &stringREF << COLOR_RESET << std::endl;
	std::cout << COLOR_WHITE <<"string content: " << string << COLOR_RESET << std::endl;
	std::cout << COLOR_WHITE <<"stringPTR content: " << *stringPTR << COLOR_RESET << std::endl;
	std::cout << COLOR_WHITE <<"stringREF content: " << stringREF << COLOR_RESET << std::endl;
	return 0;
}