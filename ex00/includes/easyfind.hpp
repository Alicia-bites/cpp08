#pragma once

#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T & input, int n)
{
	typename T::iterator it;
	it = std::find(input.begin(), input.end(), n);
	if (it != input.end())
	{
		std::cout << "Element found in myvector: " << *it << std::endl;
	}
	else
		throw std::overflow_error("Element not found in myvector\n");
	return it;
}