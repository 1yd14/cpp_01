/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:55:55 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 15:15:09 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *z3 = newZombie("newZombie");
	
	Zombie z1("Marcel");
	Zombie z2("Eric");
	z1.announce();
	z2.announce();
	z3->announce();
	delete z3;
}
