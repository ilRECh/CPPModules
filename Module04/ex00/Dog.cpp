#include "Dog.hpp"

Dog::Dog():	Animal("Dog")
{
	std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor called! (Dog)" << std::endl;
}

Dog::Dog(const Dog &D):	Animal(D.type)
{
	std::cout << "Copy constructor called! (Dog)" << std::endl;
}

Dog& Dog::operator=(const Dog &D)
{
	if (this == &D)
		return (*this);
	type = D.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "The Dog says: Woof-woof!" << std::endl;
}
