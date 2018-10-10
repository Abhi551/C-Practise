#include <iostream>

using namespace std ;

// constructor overloading
class construct
{
public:
	int a , b;
	// default constructor
	construct()
	{	
		cin>>a>>b;
		cout<<add(a,b)<<endl;
	}

	// parameterized constructor

	// constructor overloading 
	construct (int a)
	{
		cout<<a*a<<endl;
	}
	construct(int a , int b)
	{
		cout<<add(a,b)<<endl;
	}

	int add(int a , int b)
	{
		return (a+b);
	}
};

int main()
{
	construct c;
	construct c1(1,1);
	construct c2 = construct(5);
	return 0;
}