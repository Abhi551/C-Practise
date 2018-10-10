#include <iostream>

using namespace std;

// defining a class with all member functions of the class outside the class

class cubiod{
	float l=10;
public:
	float len , breadth , dep ;
	// function declaration before defining the functions outside the class
	float setl();
	float vol();
	float set();
	float get();
};

float cubiod :: set()
{
	l = len ;
}

float cubiod :: get()
{
	return (l);
}
float cubiod :: setl()
{
	cin>>len>>breadth>>dep;
}

float cubiod :: vol()
{
	return (len*breadth*dep);
}

int main()
{
	cubiod A;
	A.setl();
	cout<<A.vol()<<endl;
	cubiod B;
	cin>>B.len>>B.breadth>>B.dep;
	cout<<B.vol()<<endl;
	cubiod C;
	cout<<"set l = "<<endl;
	cin>>C.len;
	C.set();
	cout<<C.get();
	return 0;
}