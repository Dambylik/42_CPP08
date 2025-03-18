/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutants.hpp                                        :+:      :+:    :+:   */
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

template <typename T>

class Mutants : public std::stack<T> {

    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        Mutants() {};

        ~Mutants() {};

        Mutants( const Mutants& rhs ) { *this = rhs; }

        Mutants& operator=(const Mutants& rhs) {

            if (this != &rhs) {
                std::stack<T>::operator=(rhs);
            }

            return *this;
        }

        iterator begin() { 
            return this->c.begin(); 
        }

        iterator end() { 
            return this->c.end(); 
        }
};
