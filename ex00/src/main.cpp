/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 12:14:28 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include "Colors.hpp"

int main() {
    
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    std::cout << FYEL("Vector created: ");
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

    return 0;
}
