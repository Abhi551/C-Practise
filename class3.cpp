#include <iostream>

using namespace std;

class A 
{
protected:
	float a;
	float b;
};

// child class of A
class child_A: public A
{
public:
	void set(float x, float y);
	float get ();
};

void child_A::set(float x , float y)
{
	a = x;
	b = y;
}

float child_A::get()
{
	return (a+b);
}

int main()
{	child_A  a;
	a.set(45,25);
	cout<<a.get();
	return 0;
}