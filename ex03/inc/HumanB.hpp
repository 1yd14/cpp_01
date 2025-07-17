/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:42:22 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/17 17:49:53 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;
	
	public:
		HumanB (std::string name);
		void attack(void);
		void setWeapon(Weapon newWeapon);
};

#endif