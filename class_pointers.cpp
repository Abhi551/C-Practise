#include <iostream>
using namespace std;

class Box
{
float l , b , h;

public:
	int a=2;
	Box(float x = 2 , float y = 2 , float z = 3)
	{
		cout<<"constructor"<<endl;
		l = x;
		b = y;
		h = z;
	}

	float vol()	
	{
		return (l*b*h);
	}

	int compare(Box box)
	{	
		cout<<this->vol()<<endl;
		cout<<box.vol()<<endl;
		return this->vol()>box.vol();
	}
};
int main()
{
	Box b1(1,2,3);
	Box b2(5,6,7);
	b1.compare(b2);
	Box *b3;
	b3 = &b1;
	cout<<b3->vol()<<endl;
	cout<<b3->a;

	return 0;
}