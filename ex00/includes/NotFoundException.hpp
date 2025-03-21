/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotFoundException.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:54:57 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 11:56:31 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include "Colors.hpp"

class NotFoundException : public std::exception {
    
    public:
        const char* what() const throw() {
            return ("Element not found in container");
        }
    };