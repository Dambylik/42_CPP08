/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:21:49 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/21 15:13:07 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _maxSize(0) {}

Span::Span( unsigned int N ): _maxSize(N) {}

Span::~Span() {}

Span::Span( Span const & other ) { (*this ) = other; }

Span& Span::operator=( Span const & other ) {
	
    if (this != &other) {
		this->_maxSize = other._maxSize;
		this->_numbers = other._numbers;
	}
	return (*this);
}

// boualem-------------------------------------------------------------------- Methods

void Span::addNumber( int num ) { // Adding a Single Number
	
	if (this->_numbers.size() == this->_maxSize) // Checks if _numbers is full before adding.
		throw Span::TooBigException(); // If full, throws TooBigException().
	
	this->_numbers.push_back(num); //Otherwise, appends the number to _numbers.
}

void Span::addRange( it start, it end ) { // Adding a Range of Numbers
	
	if (this->_numbers.size() + std::distance(start, end) > this->_maxSize) { // Uses std::distance(start, end) to check the number of elements in the range.
		throw Span::TooBigException(); // If adding them exceeds _maxSize, it throws an exception.
	}
	this->_numbers.insert(this->_numbers.end(), start, end); // Otherwise, inserts elements into _numbers using std::vector::insert().	
}

int	Span::shortestSpan() { // Finding the Shortest Span
	
	if (this->_maxSize < 2 || this->_numbers.size() < 2) { // Throws an exception if there are fewer than 2 numbers.
		
		throw Span::TooSmallException();
	}
	std::vector<int> copy(this->_numbers); //Creates a copy of _numbers and sorts it.
	std::sort(copy.begin(), copy.end()); 
	int span = *(copy.begin() + 1) - *(copy.begin());

	for (it i = copy.begin(); i + 1 != copy.end(); i++) {
		if ( *(i + 1) - *(i) < span) // Computes the smallest difference between consecutive elements.
			span = *(i + 1) - *(i);
	}
	return (span);
}

int	Span::longestSpan() {

	if (this->_maxSize < 2 || this->_numbers.size() < 2)
		throw Span::TooSmallException();

	std::vector<int> copy(this->_numbers);
	std::sort(copy.begin(), copy.end());
	int span =  *(copy.end() - 1) - *(copy.begin());

	return (span);
}
