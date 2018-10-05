#include <iostream>


// linear seaech using dynamic array
using namespace std;

float avg(float arr[] , int N);

int main()
{
	int N;
	cin >> N;

	// initialize NULL ptr
	float *arr = NULL;

	// dynamic memomry allocation using new
	arr = new float[N];

	for (int i = 0 ; i < N ; i++)
	{
		arr[i] = i + 5;
	}

	cout<<avg(arr , N);
	// free memory
	delete [] arr;
	arr = NULL;
	return 0;
}

float avg(float *p, int N)
{
	float sum = 0;
	for (int i = 0 ; i < N ; i++)
	{
		sum = sum + *(p+i);
	}
	cout<<sum<<endl;
	return (sum/6.0);
}