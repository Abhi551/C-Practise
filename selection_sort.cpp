#include <iostream>

using namespace std;

int selection_sort(int arr[] , int n)
{

int i , j , min, swap, min_index;
for (i = 0; i<n ; i++)
{
	min = arr[i];
	for (j = i+1; j<n; j++)
	{
		if(arr[j]<min)
		{ 
			min = arr[j];
			min_index = j;
		}
	}

	if (min !=arr[i])
	{
		swap = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = swap;
	}


}
cout<<"\n\n sorted array is";
for(i = 0 ; i < n; i++ )
{
	cout<<arr[i]<<"\n";
}
}

int main()
{
	int arr[10000], n;
	cout<<"array size";
	cin>>n;
	for (int i = 0; i<n ;  i++)
	{
		cin>>arr[i];
	}

	selection_sort(arr,n);
	return 0;
}