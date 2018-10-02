#include <iostream>

using namespace std;

int array_of_pointers();
int ptr2ptr();

int main()
{
	// null pointers 
	int *ptr;
	ptr = NULL;
	cout<<"null pointer "<<ptr<<endl;

	// operations in pointer 
	int a = 10 , b = 20;
	int *a1 , *a2;
	a1 = &a;
	a2 = &b;

	cout<<"sum of poiners "<<endl;
	cout <<a1<<endl<<a2<<endl;
	
	// increment *a1 and we get the value of a2
	a1++;
	cout<<*a1<<endl;

	// comparisons in pointers

	int arr[11] = {1,2,6,5,4,8,8};
	for(int i = 0 ; i<7 ; i++)
	{
		// points to the starting of array
		ptr =  arr;
		//incrementing the pointer address;
		cout<<ptr<<endl<<&arr[i]<<endl;
		++ptr;
	}

	array_of_pointers();
	ptr2ptr();

	return 0;
}

int array_of_pointers()
{	
	cout<<"functions starts here\n";
	int arr[10] = {1,2,3,4};
	int *ptr[10];
	
	// assign the value for each ptr using array
	for(int i = 0 ;  i<3 ; i++)
	{
		ptr[i] =  &arr[i];

		cout<<ptr[i]<<endl;
		cout<<*ptr[i]<<endl;
	}

	// strings of names

	char *names[10] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};
	for (int i = 0 ; i < 4 ; i++)
	{
		cout <<endl<<names+i<<endl<<names[i]<<endl;	
	}
	
	int array[10];

	// input and output in array using pointers

	for (int i = 0; i<4 ; i++)
	{	
		//cin>>array[i];
		cin>>*(array+i);
	}

	for (int i = 0; i<4 ; i++)
	{	
		//cin>>array[i];
		cout<<*(array+i)<<endl;
		cout<<array+i<<endl;
	}

	return 0;
}

int ptr2ptr()
{
	int *a , **b , c = 10 ;
	a = &c;
	b = &a;

	cout <<*a<<endl;
	cout <<**b<<endl;
	return 0;
}