/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:50 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 19:30:26 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Colors.hpp"

#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span {

    public:

        typedef std::vector<int>::iterator ITER;

        Span(unsigned int);
        ~Span();

        Span(const Span&);
        Span& operator=(const Span&);

        class TooSmallException : public std::exception {
            public:
                virtual const char * what () const throw() {
                    return "Not enough elements to find span";
                }
        };
        
        class TooBigException : public std::exception {
            public:
                virtual const char * what () const throw() {
                    return "Can't add any more numbers";
                }
        };

        void	addNumber(int);
        void	addRange(ITER, ITER);
        int		shortestSpan();
        int		longestSpan();

    private:

        std::vector<int> _v;
        std::size_t _s;
        Span();
};
