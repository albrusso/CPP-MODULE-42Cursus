/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:25:32 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 14:48:32 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug() {
	std::cout << COLOR_BLUE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << COLOR_RESET << std::endl;
}

void Harl::info(void) {
	std::cout << COLOR_YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << COLOR_RESET << std::endl;
}

void Harl::warning(void) {
	std::cout << COLOR_ORANGE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << COLOR_RESET << std::endl;
}

void Harl::error(void) {
	std::cout << COLOR_RED << "This is unacceptable! I want to speak to the manager now." << COLOR_RESET << std::endl;
}

typedef void (Harl::*ptrFunc)(void);

void Harl::complain(std::string level) {
	std::map<std::string, ptrFunc> harlMap;
	harlMap["DEBUG"] = &Harl::debug;
	harlMap["INFO"] = &Harl::info;
	harlMap["WARNING"] = &Harl::warning;
	harlMap["ERROR"] = &Harl::error;

	if (harlMap.find(level) != harlMap.end())
		(this->*harlMap[level])();
	else
		std::cout << COLOR_WHITE << "Level not found" << COLOR_RESET << std::endl;
}