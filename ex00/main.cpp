/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:14:05 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 03:05:38 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main( void )
{
	ClapTrap jimmy = ClapTrap("jimmy");
	ClapTrap tommy = ClapTrap("tommy");
	
	jimmy.attack("tommy");
	tommy.takeDamage(jimmy.getAttackDamage());
	jimmy.printStatus();
	tommy.printStatus();
	
	jimmy.takeDamage(9);
	jimmy.attack("tommy");
	jimmy.printStatus();
	tommy.printStatus();
	
	jimmy.beRepaired(3);
	jimmy.printStatus();
	tommy.printStatus();
	
	jimmy.takeDamage(4);
	jimmy.attack("tommy");
	jimmy.printStatus();
	tommy.printStatus();
	return 0;
}