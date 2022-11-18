#include "Span.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./easyfind <test number>" << std::endl;
		return 0;
	}
	int arg = atoi(argv[1]);
	srand(time(NULL));
	if (arg == 1)
	{
			std::cout << CADETBLUE2
				<< "Let's check building a Span object with default constructor"
				<< RESET
				<< std::endl;
			Span	a(3);
			std::cout << a << std::endl;
			std::cout << CADETBLUE1
				<< "Filling Span a with 2 (testing addNumber() function)... "
				<< RESET
				<< std::endl;
			a.addNumber(2);
			a.addNumber(2);
			a.addNumber(2);
			a.addNumber(2);
			std::cout << a << std::endl;
	}
	if (arg == 2)
	{
		std::cout << CADETBLUE2
			<< "Let's check copy constructor" 
			<< RESET
			<< std::endl;
		Span b(1);
		b.addNumber(2);
		std::cout << DARKORANGE1 << "Printing b"
			<< RESET << std::endl;
		std::cout << b << std::endl;
		std::cout << CADETBLUE1 << "Constructing c by copy of b"
			<< RESET << std::endl;
		Span c(b);
		std::cout << DARKRED2 << "Printing c"
			<< RESET << std::endl;
		std::cout << c << std::endl;
		b.addNumber(3);
		std::cout << DARKORANGE1 << "Printing b"
			<< RESET << std::endl;
		std::cout << b << std::endl;
		std::cout << DARKRED2 << "Printing c"
			<< RESET << std::endl;
		std::cout << c << std::endl;
	}
	if (arg == 3)
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	if (arg == 4)
	{
		Span	big(10000);
		for (int i = 0; i < 10000; i++)
			big.addNumber(rand());
		// std::cout << big << std::endl;
		std::cout << big.longestSpan() << std::endl;
	}
	if (arg == 5)
	{
		Span	ultraBig(300000);
		for (int i = 0; i < 300000; i++)
			ultraBig.addNumber(rand());
		// std::cout << ultraBig << std::endl;
		std::cout << ultraBig.shortestSpan() << std::endl;

	}
	return 0;
}
