/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 19:22:21 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(0));
	Span sp = Span(100000);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n";

	try {
		for (int i = 0; i < 100000; i++) {
			int l = rand();
			sp.addNumber(l);
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

    std::cout << "\n";

	try {
        Span ranged = Span(200000);
        std::vector<int> vector;
        
        for (int i = 0; i <= 200000; i++) {
            vector.push_back(i);
        }
        
        std::vector<int>::iterator s = vector.begin();
        std::vector<int>::iterator e = vector.begin();
        std::advance(s, 0);
        std::advance(e, 200000); 

        ranged.addRange(s, e);
        std::cout << ranged.shortestSpan() << std::endl;
        std::cout << ranged.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	return 0;
}