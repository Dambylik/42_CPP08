/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 16:34:01 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


// Ensure all standard stack functions work correctly (e.g., push(), pop(), size()).
// Verify that it behaves like std::list (by comparing outputs).

int main() {

    {
        MutantStack<int> mstack; // We create a MutantStack<int> object.

        mstack.push(5); // Push 5 and 17 onto the stack.
        mstack.push(17);
        
        std::cout << mstack.top() << std::endl; // Prints 17 (the most recently added element).

        mstack.pop(); // Removes 17 from the stack.
        
        std::cout << mstack.size() << std::endl; // Now, only 5 remains, so size is 1.

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;

        while (it != ite) { // terates through the stack like a list and prints each element.
			std::cout << *it << std::endl;
			++it;
        }

        std::stack<int> s(mstack); // This copies mstack into a standard std::stack<int>, confirming that MutantStack behaves exactly like a std::stack.   
    }

    //for list :
    std::cout << "=======================================" << std::endl;

    {
        std::list<int> mstack;

        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;

        mstack.pop_back();
        std::cout << mstack.size() << std::endl;

        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);

        // Add more elements to mstack if needed
        mstack.push_back(0);

        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();

        ++it;
        --it;

        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }

        std::list<int> s(mstack.begin(), mstack.end());
    }

    return 0;
   
}
