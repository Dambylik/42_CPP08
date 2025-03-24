/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/24 12:14:51 by okapshai         ###   ########.fr       */
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

    std::cout << std::endl << "--------------DEQUE--------------" << std::endl;
    std::deque<int> fnumbers;
    fnumbers.push_back(10);
    fnumbers.push_back(20);
    fnumbers.push_back(30);
    fnumbers.push_back(40);
    fnumbers.push_back(50);

    std::cout << FYEL("Deque INT created: ");
    for (std::deque<int>::iterator itf = fnumbers.begin(); itf != fnumbers.end(); ++itf) {
        std::cout << *itf << " ";
    }
    std::cout << std::endl;
    
    try {
        std::deque<int>::iterator itint = easyfind(fnumbers, 30);
        std::cout << FGRN("Element found in container: ") << *itint << std::endl;
    } catch (const std::exception& e) {
        std::cout << FRED(e.what()) << std::endl;
    }

    try {
        std::deque<int>::iterator itint = easyfind(fnumbers, 100);
        std::cout << FGRN("Element found in container: ") << *itint << std::endl;
    } catch (const std::exception& e) {
        std::cout << FRED(e.what()) << std::endl;
    }
    
    return 0;
}