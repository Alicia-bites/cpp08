#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

# define CADETBLUE2 "\033[38;5;73m"
# define CADETBLUE1 "\033[38;5;72m"
# define DARKORANGE1 "\033[38;5;208m"
# define DARKRED2 "\033[38;5;88m"
# define RED1 "\033[38;5;196m"
# define DODGERBLUE1 "\033[38;5;33m"
# define RESET "\033[0m"

class Span
{
	private:
		unsigned int		n_;
        std::vector<int>	storage_;
		
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

		void				addNumber(int newNumber);
		unsigned int		shortestSpan();
		int					longestSpan();
		void				addSequenceToFront(std::vector<int> inputVector, std::vector<int>::iterator begin,
								std::vector<int>::iterator end);
		void				addSequenceToBack(std::vector<int> inputVector, std::vector<int>::iterator begin,
								std::vector<int>::iterator end);
							
};

std::ostream&	operator<<(std::ostream & o, const Span & rhs);