/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:51:03 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/19 15:23:34 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	fileExists(const std::string& filename) {
	std::ifstream file(filename);
	return file.good();
}

int	main(int argc, char* argv[]){
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4) {
		std::cout << "Input incorrect" << std::endl;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::cout << filename << std::endl;
	if (fileExists(filename)) {
		std::cout << "file exists!" << std::endl;
	}
	else {
		std::cout << "file does not exists" << std::endl;
	}
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
};

