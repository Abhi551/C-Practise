#include <iostream>

using namespace std;
int func(int a);

int main()
{	
	int x;
	cin>>x;
	
	cout<<func(5);
	func(5)+15;
	func(5)+10;
	cout<<func(5);
	return 0;
}

int func(int a)
{	
	static int a;
	a = 5+a;
	cout<<"a value = "<<a;
	return (&a);
}