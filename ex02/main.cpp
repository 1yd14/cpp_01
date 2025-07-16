/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:18:58 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 16:36:30 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << std::left;
	std::cout << std::setw(35) << "address of string: " << &string << std::endl;
	std::cout << std::setw(35) << "address held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(35) << "address held by stringREF: " << &stringREF << std::endl;
	std::cout << std::setw(35) << "value of string: " << string << std::endl;
	std::cout << std::setw(35) << "value pointed to by stringPTD: " << *stringPTR << std::endl;
	std::cout << std::setw(35) << "value pointed to by stringREF:  " << stringREF << std::endl;
}