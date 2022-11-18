#include "easyfind.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./easyfind <test number>" << std::endl;
		return 0;
	}
	std::string	arg(argv[1]);
	if (arg == "1")
	{
		try
		{
			int myints[] = {10, 20, 30, 40};
			std::vector<int> myvector (myints, myints+4);
			std::vector<int>::iterator it;

			it = easyfind(myvector, 30);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (arg == "2")
	{
		try
		{
			int myints[] = {10, 20, 30, 40};
			std::vector<int> myvector (myints, myints+4);
			std::vector<int>::iterator it;

			it = easyfind(myvector, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (arg == "3")
	{
		try
		{
			int myints[] = {};
			std::vector<int> myvector (myints, myints);
			std::vector<int>::iterator it;

			it = easyfind(myvector, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
	
}