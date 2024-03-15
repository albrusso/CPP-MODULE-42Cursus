/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:11:37 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 15:48:49 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

#define COLOR_RED     "\033[1;31m"
#define COLOR_ORANGE  "\033[1;38;5;208m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_WHITE   "\033[1;37m"
#define COLOR_GRAY    "\033[1;30m"
#define COLOR_RESET   "\033[0m"

class Weapon {
private:
		std::string type;
public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void) const;
		void setType(std::string _s);
};

#endif