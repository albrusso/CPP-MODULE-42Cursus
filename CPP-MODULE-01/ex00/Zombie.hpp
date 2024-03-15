/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:38:17 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 14:49:10 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

#define COLOR_RED     "\033[1;31m"
#define COLOR_ORANGE  "\033[1;38;5;208m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_WHITE   "\033[1;37m"
#define COLOR_RESET   "\033[0m"

class Zombie {
private:
	std::string	name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
};

#endif
