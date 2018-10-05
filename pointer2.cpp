#include <typeinfo>
#include <iostream>

using namespace std;

int sum(int *p)
{	

	cout<<p<<endl;
	cout<<*p<<endl;
}
int sum2(int *q)
{	
	int sum = 0;
	for (int i = 0 ; i<5 ; i++)
	{
		sum = sum + *(q+i);
	}
	cout<<sum<<endl;
}

int *sum3()
{	
	int a ;
	static int *r;
	cin >> a ;
	r = &a;
	return (r);
}
int main()
{		
	int *x , *y , *z;

	// passing pointer to function
	int a = 45;
	x = &a;
	cout<<x<<endl;
	sum(x);

	// passing array to function 
	int b[5] = {1000, 2, 3, 17, 50};
	y = b;
	sum2(y);

	// returning pointer to function
	z = sum3();
	cout<<*z<<endl;
	return 0;
}