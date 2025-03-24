/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:21:49 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/24 13:12:25 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _maxSize(0) {}

Span::Span( unsigned int N ): _maxSize(N) {}

Span::Span( Span const & other ) { (*this ) = other; }

Span& Span::operator=( Span const & other ) {
	
    if (this != &other) {
		this->_maxSize = other._maxSize;
		this->_numbers = other._numbers;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, Span const & rhs) {
	
	lhs << rhs.getMaxSize()<< std::endl;
	return (lhs);
}

Span::~Span() {}

//-------------------------------------------------------------------- Methods

void Span::addNumber( int num ) {
	
	if (this->_numbers.size() == this->_maxSize)
		throw Span::TooBigException();
	
	this->_numbers.push_back(num);
}

void Span::addRange( it start, it end ) {
	
	if (this->_numbers.size() + std::distance(start, end) > this->_maxSize) {
		throw Span::TooBigException();
	}
	this->_numbers.insert(this->_numbers.end(), start, end);
}

int	Span::shortestSpan() {
	
	if (this->_maxSize < 2 || this->_numbers.size() < 2) {
		throw Span::TooSmallException();
	}
	std::vector<int> copy(this->_numbers);
	std::sort(copy.begin(), copy.end()); 
	int span = *(copy.begin() + 1) - *(copy.begin());

	for (it i = copy.begin(); i + 1 != copy.end(); i++) {
		if ( *(i + 1) - *(i) < span)
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
