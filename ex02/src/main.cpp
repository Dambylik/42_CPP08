/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 19:24:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutants.hpp"

int main() {

    {
        Mutants<int> mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;

        mstack.pop();
        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        Mutants<int>::iterator it = mstack.begin();
        Mutants<int>::iterator ite = mstack.end();

        ++it;
        --it;

        while (it != ite) {
			std::cout << *it << std::endl;
			++it;
        }

        std::stack<int> s(mstack);   
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
