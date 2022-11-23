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
	try
	{
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
			std::cout << big.longestSpan() << std::endl;
		}
		if (arg == 5)
		{
			Span	ultraBig(300000);
			for (int i = 0; i < 300000; i++)
				ultraBig.addNumber(rand());
			std::cout << ultraBig.shortestSpan() << std::endl;
		}
		if (arg == 6)
		{
			int myints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			std::vector<int> v (myints, myints+10);

			Span	gargantua(3);
			gargantua.addNumber(11);
			gargantua.addNumber(12);
			gargantua.addNumber(13);
			std::cout << gargantua << std::endl;

			gargantua.addSequenceToFront(v, v.begin(), v.end());
			std::cout << gargantua << std::endl;
		}
		if (arg == 7)
		{
			int myints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			std::vector<int> v (myints, myints+10);

			Span	gargantua(50);
			gargantua.addNumber(11);
			gargantua.addNumber(12);
			gargantua.addNumber(13);
			gargantua.addNumber(14);
			std::cout << gargantua << std::endl;

			gargantua.addSequenceToFront(v, v.begin(), v.end());
			std::cout << gargantua << std::endl;
		}
		if (arg == 8)
		{
			int myints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			std::vector<int> v (myints, myints+10);

			Span	gargantua(50);
			gargantua.addNumber(0);
			gargantua.addNumber(-1);
			gargantua.addNumber(-2);
			gargantua.addNumber(-3);
			std::cout << gargantua << std::endl;

			gargantua.addSequenceToBack(v, v.begin(), v.end());
			std::cout << gargantua << std::endl;
		}
		if (arg == 9)
		{
			Span a(3);
			a.addNumber(1);
			a.addNumber(2);
			a.addNumber(3);
			std::cout << "a contains : " << a << std::endl;
			Span b(a);
			std::cout << "b contains : " << b << std::endl;

			Span c(2);
			c.addNumber(200);
			c.addNumber(100);
			std::cout << "c contains : " << c << std::endl;
			Span d;
			d = c;
			std::cout << "d contains : " << d << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << RED1 << e.what() << RESET << '\n';
	}
	return 0;
}
