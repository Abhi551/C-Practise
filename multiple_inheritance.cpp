#include <iostream>
using namespace std;

class A{
public:
	int mul(int x)
	{
		return(x*10);
	}
};
class B{
protected:
	int a , b;
	int add()
	{
		return (a+b);
	}
};
class C: public A , protected B
{
public:
	int x;
	void get()
	{
	cin>>a>>b;
	x = add();
	}
};
int main()
{
	class C c;
	c.get();
	cout<<c.x<<endl;
	cout<<c.mul(c.x)<<endl;

	return 0;
}