/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:58:00 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 16:06:01 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int	main(void) {
	Zombie *zombies;
	int n = 7;

	zombies = zombieHorde(n, "lyvan-de");
	for (int i = 0; i < n; i++) {
		zombies[i].announce();
	};
	delete [] zombies;
}
