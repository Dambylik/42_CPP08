/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:50 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 19:30:39 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>

template < typename T >

// The goal of this exercise is to create a custom stack (MutantStack) that behaves 
// like std::stack, but with iterators.
// Normally, std::stack does not support iteration because it is designed as a Last-In-First-Out (LIFO) 
// structure without direct element access except top().

class MutantStack : public std::stack<T> { // We need to: Inherit from std::stack<T> to extend its functionality.

    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        MutantStack() {};
        MutantStack( const MutantStack& rhs ) { *this = rhs; }
        MutantStack& operator=(const MutantStack& rhs) {
            if (this != &rhs) {
                std::stack<T>::operator=(rhs);
            }
            return (*this);
        }
        ~MutantStack() {};

// Add iterators to allow traversal of elements like a normal sequence container.
// std::stack<T> itself does not provide iterators, but it is internally based on std::deque<T>.
// We can expose begin() and end() using c (the internal container of std::stack).
   
        iterator begin() { 
            return this->c.begin(); 
        }

        iterator end() { 
            return this->c.end(); 
        }
};
