#include "MutanStack.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./easyfind <test number>" << std::endl;
		return 0;
	}
	int arg = atoi(argv[1]);
	if (arg == 1)
	{
		MutantStack<std::string> mutant;
		mutant.push("hey");
		std::cout << mutant.top() << std::endl;
		mutant.push("what");
		mutant.push("sup");
	}
	return 0;
}