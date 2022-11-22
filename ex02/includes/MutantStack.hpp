#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include "colors.hpp"
#include <stack>
#include <list>

// // --> Classe d'adaptateur de conteneur modèle qui fournit une
// // restriction des fonctionnalités limitant l'accès à l'élément 
// // ajouté le plus récemment pour un type de conteneur sous-jacent. 

// // La stack classe est utilisée lorsqu’il est important de préciser
// // que seules les opérations stack sont effectuées sur le conteneur.

// // container_type	: Type qui fournit le conteneur de base à adapter 
// // par un objet stack.

// // size_type		: Type entier non signé qui peut représenter le 
// // nombre d'éléments dans un stack.

// // value_type		: Type qui représente le type d'objet stocké en
// // tant qu'élément dans un objet stack.

template <typename T>
class MutantStack : public std::stack<T>
{
	private :
	public:
		// default constructor
		MutantStack<T>()
		: std::stack<T>()
		{};

		// copy constructor
		MutantStack<T>(const MutantStack<T> & src)
		: std::stack<T>(src)
		{};

		// destructor
		~MutantStack<T>()
		{};

		// copy assignement operator
		MutantStack<T>	&operator=(const MutantStack<T> & rhs)
		{
            if (this != &rhs)
            	std::stack<T>::operator=(rhs);
            return (*this);
		};
		// return the iterator of which type is the type of the container
		// chosen by the user and belongs to the class stack, itself 
		// being a member of the standart library.
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{ 
			return std::stack<T>::c.begin();
		}
		iterator	end()
		{
			return  std::stack<T>::c.end();
		}
};
