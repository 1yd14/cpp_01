/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:55:55 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 16:00:28 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int	main(void) {
	Zombie *z2 = newZombie("new");
	
	Zombie z1("first");
	z1.announce();
	z2->announce();
	delete z2;
	randomChump("random");
}
