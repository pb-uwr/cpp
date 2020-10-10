//Created by Wojciech Zurek 10.10.2020

#include <iostream>

class A
{
public:
	virtual void first()
	{
		std::cout << "class A - function first\n";
	}

	void second()
	{
		std::cout << "class A - function second\n";
	}
};

class B : public A
{
public:
	void first() override
	{
		std::cout << "class B - function first\n";
	}

	void second()
	{
		std::cout << "class B - function second\n";
	}
};

int main()
{
	A* a = new A;
	A* b = new B;

	a->first();					//class A - function first
	a->second();				//class A - function second

	b->first();					//class B - function first
	b->second();				//class A - function second

	b->A::first();				//class A - function first
	b->A::second();				//class A - function second

}