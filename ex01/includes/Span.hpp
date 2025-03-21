/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:50 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 13:55:45 by okapshai         ###   ########.fr       */
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


// This exercise focuses on class design, exception handling, and iterators in C++. 
// You need to implement a Span class that stores up to N integers and provides methods 
// to calculate the shortest and longest spans between the stored numbers.


// Class Design 

// The Span class needs to:

//     Store up to N integers.
//     Prevent adding more than N numbers (throws an exception).
//     Provide methods to find the shortest and longest span.

class Span {

    public:

        typedef std::vector<int>::iterator it;
        
        Span( void );
        Span( unsigned int N); // Initializes _maxSize with N.
        Span( Span const & other );
        Span& operator=( Span const & other);
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

        void	addNumber( int num ); // Adds a single number.
        void	addRange(it, it); // Adds multiple numbers using iterators.
        int		shortestSpan(); // Calculate the spans.
        int		longestSpan(); // Calculate the spans.
        int     getSize() {return _numbers.size(); }

    private:

        std::vector<int> _numbers;// _v; Stores the integers.
        std::size_t _maxSize; //_s; Maximum numbers allowed.
        
};
