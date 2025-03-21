/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:50 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 12:04:39 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm> // for std::find
#include <iterator>  // for std::distance
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "NotFoundException.hpp"  


// This exercise introduces function templates in C++. 
// You need to write a function template easyfind that works with standard containers 
// (like std::vector, std::list, etc.) to find a specific integer.

// Standard Library Containers
// You are required to work with standard sequence containers such as:

// std::vector<int> (Dynamic array)
// std::list<int> (Doubly linked list)
// std::deque<int> (Double-ended queue)

// You don’t have to handle associative containers like std::map or std::set.

template< typename T >

typename T::iterator easyfind(T& container, int toFind) { 
    
    typename T::iterator it = std::find(container.begin(), container.end(), toFind); // Extracts the iterator type for container T

    if (it == container.end())
        throw NotFoundException(); 

    return (it);
}