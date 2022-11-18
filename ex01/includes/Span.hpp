#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "colors.hpp"

class Span
{
	private:
		unsigned int	n_;
        std::vector<int> storage_;
		
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span & ori);
		~Span(void);
		Span &operator=(const Span & rhs);

		unsigned int		getN() const;
		std::vector<int>	getStorage() const;

		static void			print(const int & n);
		void				displayContent(std::ostream& o) const;

		void				addNumber(unsigned int newNumber);
		unsigned int		shortestSpan();
		int					longestSpan();
};

std::ostream&	operator<<(std::ostream & o, const Span & rhs);