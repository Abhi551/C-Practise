#include <iostream>
using namespace std;

class Box
{
float l , bre , h;

public:
	static int a;
	static int b;
	static int c;

	Box(float x = 2 , float y = 2 , float z = 3)
	{	
		cout<<"constructor"<<endl;
		l = x;
		bre = y;
		h = z;
		a++;
	}


	static float area()
	{
		return (2*(Box::b+Box::a)*Box::c);
	}
	float vol()	
	{
		return (l*bre*h);
	}

	int compare(Box box)
	{	
		cout<<this->vol()<<endl;
		cout<<box.vol()<<endl;
		return this->vol()>box.vol();
	}
};
int Box::a;
int Box::b;
int Box::c;
int main()
{
	Box b1(1,2,3);
	cout<<Box::a<<endl;
	Box b2(5,6,7);
	cin>>Box::a>>Box::b>>Box::c;
	cout<<Box::area();

	return 0;
}