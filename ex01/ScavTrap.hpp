/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:07:18 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 16:18:38 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H_
#define SCAVTRAP_H_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap { //ScavTrap class is inherited from ClapTrap
	private:
		ScavTrap(); //default constructor
	
	public:
		ScavTrap( std::string _name ); //constructor
		~ScavTrap( void ); //destructor

		void attack(const std::string& target);
		void guardGate();
};

#endif