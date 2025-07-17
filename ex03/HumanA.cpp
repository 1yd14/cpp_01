/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:42:28 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/17 17:51:31 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/HumanA.hpp"
#include <iostream>

HumanA::HumanA (std::string name, Weapon& weapon) : name(name), weapon(weapon) {
};

void HumanA::attack (void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
