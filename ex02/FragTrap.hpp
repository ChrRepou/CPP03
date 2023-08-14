/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:22 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 17:03:27 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H_
#define FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		FragTrap();
		
	public:
		FragTrap( std::string _name ); //constructor
		~FragTrap( void ); //destructor

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif