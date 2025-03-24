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
#include "Colors.hpp"

template < typename T >

class MutantStack : public std::stack< T > {

    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        MutantStack() {};
        MutantStack( MutantStack const & other ) { (*this) = other; }
        MutantStack & operator=( MutantStack const & other) {
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return (*this);
        }
        ~MutantStack() {};

        iterator        begin() { return this->c.begin(); }
        iterator        end() { return this->c.end(); }

        const_iterator  begin() const { return this->c.begin(); }
        const_iterator  end() const { return this->c.end(); }
};
