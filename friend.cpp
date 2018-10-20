#include <iostream>

using namespace std;

class B;

class A
{
public:
	void showB(B& x)
	{
		;
	}

};

class B
{
	int a;
public:
	friend void A::showB(B& x);

};
int main()
{
	A a;
	B b;

	return 0;
}

