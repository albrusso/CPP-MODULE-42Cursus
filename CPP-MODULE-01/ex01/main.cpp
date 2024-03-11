/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:38:04 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/11 12:54:06 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int	main(void)
{
	Zombie	*horde = zombieHorde(10, "Filippo");
	for(int i = 0; i < 10; i++)
		horde[i].announce();
}