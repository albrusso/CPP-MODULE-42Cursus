/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:06:07 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 15:50:01 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {
}

HumanB::~HumanB(void) {
}

void HumanB::attack(void) {
	if (this->weapon)
		std::cout << COLOR_ORANGE << this->name << COLOR_WHITE << " attacks with their " << COLOR_RED << this->weapon->getType() << COLOR_RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}