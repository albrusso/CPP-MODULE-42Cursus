/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:02:43 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/11 13:06:44 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{

	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	stringREF = *str;
	return (0);
}