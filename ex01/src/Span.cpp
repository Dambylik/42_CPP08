/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:21:49 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 19:29:00 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {

	std::cout << LGREEN << "Span base constructor called"<< RESET << std::endl;
}

Span::Span(unsigned int N) {
    
	std::cout << LGREEN << "Span base args constructor called" << RESET << std::endl;
	_s = N;
}

Span::~Span() {

	std::cout << LGREEN << "Span base destructor called" << RESET << std::endl;
}

Span::Span(const Span & other) {
	
    std::cout << LGREEN << "Span copy constructor called" << RESET << std::endl;
	(*this ) = other;
}

Span& Span::operator=(const Span& rhs) {
	
    std::cout << LGREEN << "Span assignment operator called" << RESET << std::endl;

	if (this != &rhs) {
		this->_s = rhs._s;
		this->_v = rhs._v;
	}

	return (*this);
}

// -------------------------------------------------------------------- Methods

void Span::addNumber(int n) {
	if (this->_v.size() == this->_s)
		throw Span::TooBigException();
	
	this->_v.push_back(n);
}

void Span::addRange(ITER start, ITER end) {
	if (this->_v.size() + std::distance(start, end) > this->_s) {
		throw Span::TooBigException();
	}

	this->_v.insert(this->_v.end(), start, end);	
}

int	Span::shortestSpan() {
	if (this->_s < 2 || this->_v.size() < 2) {
		throw Span::TooSmallException();
	}
	
	std::vector<int> copy(this->_v);
	std::sort(copy.begin(), copy.end());
	int span = *(copy.begin() + 1) - *(copy.begin());

	for (ITER i = copy.begin(); i + 1 != copy.end(); i++) {
		if ( *(i + 1) - *(i) < span)
			span = *(i + 1) - *(i);
	}

	return (span);
}

int	Span::longestSpan() {

	if (this->_s < 2 || this->_v.size() < 2)
		throw Span::TooSmallException();

	std::vector<int> copy(this->_v);
	std::sort(copy.begin(), copy.end());
	int span =  *(copy.end() - 1) - *(copy.begin());

	return (span);
}
