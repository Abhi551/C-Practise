#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class A
{
public:
	// constructor overloading
	A()
	{
		cout<<"constructor 1 called"<<endl;
	}

	A(int a)
	{
		cout<<"constructor 2 called"<<endl;
	}

	A (char a)
	{
		cout<<"constructor 3 called"<<endl;
	}

	// function overloading 

	int func()
	{
		cout<<"func 1"<<endl;
	}

	int func(int a)
	{
		cout<<"function 2 "<<endl;
	}

	char func(char a)
	{
		cout<<"function 3"<<endl;
	}

};
int main() 
{
	A a;
	A b(5);
	A c('b');
    
    a.func();
    a.func(5);
    a.func('b');
    return 0;
}