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
		int myints[] = {10, 20, 30, 40};
		std::vector<int> myvector (myints, myints+4);
		std::vector<int>iterator it;

		it = easyfind(myints, 30);
		return 0;
	}
	
}