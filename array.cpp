#include <iostream>

using namespace std; 

float fun(int arr[] , int n) ;
float * fun2(int n);

int main()
{	
	float *x;

	x = fun2(5);

	for (int i = 0 ; i<5 ; i++)
	{
		cout<<*(x+i)<<endl;
	}

	int arr[5] = {12 , 54 ,56 , 48 ,78};
	cout<<fun(arr , 5);
	return 0;
}

// passing an array to the function
float fun(int *arr , int n)
{
	int sum ;
	float avg;
	for (int i = 0 ; i<n ; i++)
	{
		sum = sum + arr[i];
	}
	avg = sum/5.0;
	return avg;


}

// returning an array from the function

float * fun2(int n)
{	
	static float arr[10];
	for(int i = 0; i < n; i++)
	{

		arr[i] = i;
	}
	return arr;
}