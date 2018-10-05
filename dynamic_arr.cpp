#include <iostream>

using namespace std;

int main()
{	
	int s ;
	cin>>s;

	// pointer to int 
	int *arr = NULL;
	// allocate a block of memory 
	arr = new int[s];
	for (int i = 0 ; i<s ; i++)
	{
		cin>>arr[i];
	}

	// free the memory
	delete [] arr;
	// NULL pointer
	arr = NULL;
	return 0;
}