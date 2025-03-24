/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/24 12:03:10 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main() {

    std::cout << "--------------VECTOR--------------" << std::endl;
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    std::cout << FYEL("Vector INT created: ");
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    try {
        std::vector<int>::iterator it = easyfind(numbers, 3);
        std::cout << FGRN("Element found in container: ") << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << FRED(e.what()) << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(numbers, 10);
        std::cout << FGRN("Element found in container: ") << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << FRED(e.what()) << std::endl;
    }

    std::cout << std::endl << "--------------LIST--------------" << std::endl;
    std::list<char> letters;
    letters.push_back('a');
    letters.push_back('b');
    letters.push_back('c');
    letters.push_back('d');
    letters.push_back('e');

    std::cout << FYEL("List CHAR created: ");
    for (std::list<char>::iterator itc = letters.begin(); itc != letters.end(); ++itc) {
        std::cout << *itc << " ";
    }
    std::cout << std::endl;
    
    try {
        std::list<char>::iterator itchar = easyfind(letters, 'z');
        std::cout << FGRN("Element found in container: ") << *itchar << std::endl;
    } catch (const std::exception& e) {
        std::cout << FRED(e.what()) << std::endl;
    }

    try {
        std::list<char>::iterator itchar = easyfind(letters, 'e');
        std::cout << FGRN("Element found in container: ") << *itchar << std::endl;
    } catch (const std::exception& e) {
        std::cout << FRED(e.what()) << std::endl;
    }
    
    return 0;
}