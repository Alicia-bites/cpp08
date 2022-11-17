#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <cctype>
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T & arg, int n)
{
	typename T::iterator	it;
	it = std::find(arg.begin, arg.end, n);
	std::cout << *it << std::endl;
	if (it != arg.end())
		std::cout << "Element found in myvector: " << *it << '\n';
	else
		std::cout << "Element not found in myvector\n";
	return it;
}