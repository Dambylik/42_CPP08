/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:50 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/24 11:41:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <iostream>
#include "NotFoundException.hpp"  


template< typename T >

typename T::iterator easyfind(T& container, int toFind) { 
    
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);

    if (it == container.end())
        throw NotFoundException(); 
    
    return (it);
}