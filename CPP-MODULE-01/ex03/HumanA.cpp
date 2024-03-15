/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:39:29 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 15:49:32 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void HumanA::attack(void) const {
	std::cout << COLOR_YELLOW << this->name << COLOR_WHITE << " attacks with their " << COLOR_RED << this->weapon.getType() << COLOR_RESET << std::endl;
}