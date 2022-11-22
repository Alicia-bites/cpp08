#include "MutantStack.hpp"

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
		mutant.push("up");
		mutant.push("what's");
		std::cout << mutant.top() << std::endl;
		mutant.pop();
		std::cout << mutant.top() << std::endl;
		std::cout << "Printing mutant.begin() --> ";
		MutantStack<std::string>::iterator it = mutant.begin();
		std::cout << *it << std::endl;
		std::cout << "Printing mutant.end() --> ";
		MutantStack<std::string>::iterator it_end = mutant.end();
		std::cout << *it_end << std::endl;
	}
	if (arg == 2)
	{
		std::cout << "TESTS FROM SUBJECT" << std::endl;
		std::cout << std::endl;

		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	if (arg == 3)
	{
		std::cout << "TEST FROM SUBJECT BUT WITH STD::LIST" << std::endl;
		std::cout << std::endl;

		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	return 0;
}