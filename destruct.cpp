#include <iostream>

using namespace std ;

class A
{
	int len;
public:
	int  getlen();
	void setlen(int);
	A();
	~A();

};

int A::getlen()
	{
		return len;
	}

void A::setlen(int length)
	{
		len = length;
	}
A::A()
	{
		cout<<"object is initiated"<<endl;
	}
A::~A()
	{
		cout<<"object is destroyed"<<endl;
	}

int  main()
{
	A a;
	a.setlen(56);
	cout<<a.getlen()<<endl;
	return 0;
}