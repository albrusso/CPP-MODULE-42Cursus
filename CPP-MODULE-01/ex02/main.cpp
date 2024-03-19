/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:02:43 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/18 16:29:10 by albrusso         ###   ########.fr       */
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

	std::cout <<"string memory address: " << &string << std::endl;
	std::cout <<"stringPTR memory address: " << stringPTR << std::endl;
	std::cout <<"stringREF memory address: " << &stringREF << std::endl;
	std::cout <<"string content: " << string << std::endl;
	std::cout <<"stringPTR content: " << *stringPTR << std::endl;
	std::cout <<"stringREF content: " << stringREF << std::endl;
	return 0;
}