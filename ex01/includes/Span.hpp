/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:50 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/24 13:11:43 by okapshai         ###   ########.fr       */
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

        typedef std::vector<int>::iterator it;
        
        Span( void );
        Span( unsigned int N );
        Span( Span const & other );
        Span & operator=( Span const & other);
        ~Span();

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

        void	            addNumber( int num );
        void	            addRange(it start, it end );
        int		            shortestSpan();
        int		            longestSpan();
        int                 getSize() const {return _numbers.size(); }
        unsigned int        getMaxSize() const { return _maxSize; }

    private:

        std::vector<int>    _numbers;
        std::size_t         _maxSize;
        
};

std::ostream & operator<<(std::ostream &lhs, const Span & rhs);

