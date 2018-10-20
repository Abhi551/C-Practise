#include <iostream>

using namespace std;

// base class
class base{
	int a , b;
	void get()
	{
		cin>>a>>b;
	}
public:
	int x , y;
	int set()
	{
		get();
		x=a;
		y=b;
	}
protected:
	int mul()
	{
		return (x*y);
	}
};

class derived: public base {

public:
	
	void add()
	{
		cout<<x+y<<endl;
	}

	float div()
	{	
		//protected members can be accessed from derived class
		cout<<mul()<<endl;
		cout<<float(x/y)<<endl;
		return 0;
	}

};

int main()
{	

	derived d;
	d.set();
	d.add();
	d.div();
	return 0;


}