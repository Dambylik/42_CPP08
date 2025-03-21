/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 14:07:33 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


// Your main function performs three major tests on the Span class:

// Basic functionality test with a small set of numbers.
// Stress test with 100,000 random numbers.
// Testing the addRange() method with a vector of sequential numbers

int main() {
	
	srand(time(NULL));
	
	Span object = Span(100000); // // Creates a Span object with capacity for 100,000 numbers.
	std::cout << "Created Span size: " << object.getSize() << std::endl;
	
	object.addNumber(6);
	object.addNumber(3);
	object.addNumber(17);
	object.addNumber(9);
	object.addNumber(11);

	std::cout << "Current Span size: " << object.getSize() << std::endl;
	std::cout << FMAG("Shortest span is : ") << object.shortestSpan() << std::endl;
	std::cout << FMAG("Longest span is : ") << object.longestSpan() << std::endl;

    std::cout << "\n";

	try {
		for (int i = object.getSize(); i < 100000; i++) {
			int n = rand();
			object.addNumber(n); // Attempts to fill Span to its maximum limit (100,000 numbers) using random values.
		}

		std::cout << FMAG("Shortest span is : ") << object.shortestSpan() << std::endl;
		std::cout << FMAG("Longest span is : ") << object.longestSpan() << std::endl;

	} catch(const std::exception& e) {
		std::cerr << FRED(e.what()) << '\n';
	}

    std::cout << "\n";

	try {
        Span ranged = Span(200000); // Create a Span object with a capacity of 200,000
        std::vector<int> vector;
        
        for (int i = 0; i <= 200000; i++) {
            vector.push_back(i); // // Fill vector with numbers 0 to 200,000
        }
        
        std::vector<int>::iterator it1 = vector.begin();
        std::vector<int>::iterator it2 = vector.begin();
        std::advance(it1, 0); // Start at the beginning
        std::advance(it2, 200000);  //  // Move iterator to the end (off by one, should be 199999

        ranged.addRange(it1, it2); //  // Add range of numbers to Span
        std::cout << ranged.shortestSpan() << std::endl;
        std::cout << ranged.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << FRED(e.what()) << '\n';
    }
	return 0;
}