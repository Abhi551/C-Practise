#include <iostream>

using namespace std;

int main()
{
	int a[10];
	a[0] = 5 , a[1] = 4;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<*a<<endl;
	cout<<*a+1<<endl<<*(a+1)<<endl;
	
	int B[2][3] = {
			{1,2,3},
			{4,5,6}
			};


	// pointer in 2d arrays
	cout<<"B = "<<B<<endl;
	int *ptr;
	ptr = &B[0][0];
	cout<<ptr<<endl<<*ptr<<endl;

	// B gives the address of 1 D array of 3 elements in it 
	int (*p)[3] = B;
	// int *p = B gives error because *p is of type int but B points to 3 integers 

	cout<<*p[0]<<endl<<*p[1]<<endl<<*p[2]<<endl;
	cout<<B<<endl<<B[0]<<endl<<&B[0]<<endl;
	cout<<B+1<<endl<<*(*(B+1))<<endl;
	cout<<*B<<endl<<B[0]<<endl<<&B[0][0]<<endl;
	cout<<*B[0]<<endl;
	cout<<*(*B+1)<<endl<<*(*B+2)<<endl;


	return 0;
}