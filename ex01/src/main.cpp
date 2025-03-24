/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/24 15:16:24 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    return 0;
}

// int main() {
	
// 	srand(time(NULL));
//     std::cout << std::endl << ITALIC("--------------addNumber--------------") << std::endl << std::endl;
    	
// 	Span object(100000);
// 	std::cout << BOLD(FGRN("Created Span object with Max Size = ")) << object.getMaxSize() << std::endl;
	
// 	object.addNumber(6);
// 	object.addNumber(3);
// 	object.addNumber(17);
// 	object.addNumber(9);
// 	object.addNumber(11);

// 	std::cout << BOLD(FYEL("Span size after adding numbers = ")) << object.getSize() << std::endl;
// 	std::cout << BOLD(FMAG("Shortest span = ")) << object.shortestSpan() << std::endl;
// 	std::cout << BOLD(FCYN("Longest span = ")) << object.longestSpan() << std::endl;

//     std::cout << "\n";

//     std::cout << ITALIC("--------------Fill to its maximum limit--------------") << std::endl << std::endl;	
// 	try {
// 		for (int i = object.getSize(); i < 100000; i++) {
// 			int n = rand();
// 			object.addNumber(n);
// 		}
//         std::cout << BOLD(FMAG("Shortest span = ")) << object.shortestSpan() << std::endl;
//         std::cout << BOLD(FCYN("Longest span = ")) << object.longestSpan() << std::endl;
        
// 	}
//     catch(const std::exception& e) {
// 		std::cerr << FRED(e.what()) << '\n';
// 	}

//     std::cout << std::endl << ITALIC("--------------addRange--------------") << std::endl << std::endl;	

//     try {
//         Span bigSpan(200000);
//         std::cout << BOLD(FGRN("Created Span object with Max Size = ")) << bigSpan.getMaxSize() << std::endl;
        
//         std::vector<int> vector;
//         for (int i = 0; i < 200000; i++) {
//             vector.push_back(i);
//         }
//         bigSpan.addRange(vector.begin(), vector.end());
        
//         std::cout << BOLD(FYEL("Span size after adding numbers = ")) << bigSpan.getSize() << std::endl;
//         std::cout << BOLD(FMAG("Shortest span = ")) << object.shortestSpan() << std::endl;
//         std::cout << BOLD(FCYN("Longest span = ")) << object.longestSpan() << std::endl;
//     }
//     catch (const std::exception& e) {
//         std::cerr << FRED(e.what()) << '\n';
//     }
    
// 	return (0);
// }