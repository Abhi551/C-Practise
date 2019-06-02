#include <iostream>

using namespace std;

int bubble_sort(int arr[] , int n)
{
	int i,j;
	int swap = 0;
	for (i = 0; i<n;  i++)
	{
		for (j = 0; j < n-1 ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap =  arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}

	for (i = 0; i<n; i++)
	{
		cout<<arr[i]<<"\n";
	}
	return 0;
}

main()
{
	int arr[10000], n;
	
	cout<<"the size of array is = ";
	cin>>n;
	for (int i = 0; i<n; i++)
	{
		cin>> arr[i];
	}

	bubble_sort(arr , n);

}
