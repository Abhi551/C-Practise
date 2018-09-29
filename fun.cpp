#include <iostream>

using namespace std;

// function declaration
int max(int , int );
int change(int &x , int &y);
int change2(int *x , int *y);



int main()
{
	int a , b , c , d;
	//cout<<"enter 2 nos ";
	//cin>>a>>b;
	a = 5 , b = 6;
	cout<<"the maximum number is "<<max(a,b)<<endl;

	cout<<"the values of a and b before change are";
	cout<<a<<"\n"<<b<<endl;
	change(a,b);
	cout<<"the values of a and b after change are\n";
	cout<<a<<"\n"<<b<<endl;

	a = 5 , b = 6;
	cout<<"the values of a and b after change2 are\n";
	change2(&a , &b);
	cout<<a<<"\n"<<b<<endl;
	return 0;
}

// call by value
int max(int a , int b)
{

	if (a>=b)
	{
		return (a-b);
	}
	else return (b);
}

// call by refrence 
int change(int &a , int &b)
{
	a = a+b;
	b = a+b;
	return (b);
}

int change2(int *a , int *b)
{
	*a = *a+*b;
	*b = *a+*b;
	return 0;
}
// call by pointers
