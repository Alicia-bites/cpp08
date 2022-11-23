#include "Span.hpp"

// default constructor
Span::Span()
: n_(0)
, storage_(0)
{}

// constructor param1
Span::Span(unsigned int n)
: n_(n)
, storage_(std::vector<int>())
{}

// copy constructor
Span::Span(const Span & ori)
: n_(ori.n_)
, storage_(ori.storage_)
{}

// destructor
Span::~Span()
{}

// OPERATOR OVERLOAD ----------------------------------------------


Span	&Span::operator=(const Span & rhs)
{
	if (this != &rhs)
		storage_ = rhs.storage_;
	return *this;
}

std::ostream&	operator<<(std::ostream & o, const Span & rhs)
{
	rhs.displayContent(o);
	return o;
}

// MEMBER FUNCTIONS ----------------------------------------------

void	Span::displayContent(std::ostream & o) const
{
	o << "Storage of size "
		<< n_
		<< " contains : "
		<< std::endl;
	try
	{
		storage_.at(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED1 << "No element. Nothing to diplay." << RESET << '\n';
	}
	std::for_each(storage_.begin(), storage_.end(), print);
}

void	Span::print(const int & n)
{
	std::cout << " " << n << " | ";
}

// -- SUBJECT EXPLICIT REQUIREMENTS --------------------------------------------

void	Span::addNumber(int newNumber)
{
	if (storage_.size() < n_)
		storage_.push_back(newNumber);
	else
		throw std::overflow_error("storage is full, cannot add any more numbers");
	std::cout << DODGERBLUE1 << "Added " << newNumber << " to storage" << RESET << std::endl;
}

unsigned int Span::shortestSpan()
{
	unsigned int size = storage_.size();
	if (size <= 1)
		throw std::overflow_error("Only one element in storage.\n");
	
	std::vector<int> sorted = storage_;
	std::sort(sorted.begin(), sorted.end());
	unsigned int x = sorted[1] - sorted[0];
	for (unsigned int n = 1; n < size; n++)
		if (x > (unsigned int)(sorted[n + 1] - sorted[n]))
			x = sorted[n + 1] - sorted[n];
	return (x);
}

int Span::longestSpan()
{
    unsigned int size = storage_.size();
	if (size <= 1)
		throw std::overflow_error("Only one element in storage.\n");
	std::vector<int> sorted = storage_;
    std::sort(sorted.begin(), sorted.end());
    return (sorted.at(size - 1) - sorted.at(0));
}

void	Span::addSequenceToFront(std::vector<int> inputVector, std::vector<int>::iterator begin,
		std::vector<int>::iterator end)
{
	if (inputVector.size() > (n_ - storage_.size()))
		throw std::out_of_range("storage is full, cannot add any more numbers");
	std::copy(begin, end, std::inserter(storage_, storage_.begin()));
}

void	Span::addSequenceToBack(std::vector<int> inputVector, std::vector<int>::iterator begin,
		std::vector<int>::iterator end)
{
	if (inputVector.size() > (n_ - storage_.size()))
		throw std::out_of_range("storage is full, cannot add any more numbers");
	std::copy(begin, end, std::back_inserter(storage_));
	
}

// -- GETTERS ----------------------------------------------------

unsigned int	Span::getN() const
{
	return n_;
}

std::vector<int>	Span::getStorage() const
{
	return storage_;
}
