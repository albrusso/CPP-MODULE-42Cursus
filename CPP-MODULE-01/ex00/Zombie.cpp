/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:38:54 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 15:41:12 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string name): name(name) {
}

Zombie::~Zombie() {
	std::cout << COLOR_RED << "Zombie called " << this->name << " was destroyed" << COLOR_RESET << std::endl;
}

void Zombie::announce(void) {
	std::cout << COLOR_WHITE << this->name << ": BraiiiiiiinnnzzzZ..." << COLOR_RESET << std::endl;
}