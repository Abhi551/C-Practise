#include <iostream>

using namespace std;

int insertion_sort(int a[] , int n)
{
	int i,j,swap;
	for(i = 0; i<n-1; i++)
	{
		if(a[i] > a[i+1])
		{
			swap = a[i];
			a[i] = a[i+1];
			a[i+1] = swap;
			j = i-1;
			while(j >= 0)
			{
				if (a[j] > a[j+1])
				{
					swap = a[j];
					a[j] = a[j+1];
					a[j+1] = swap;	
				}
				j--;
			} 
		}

	}
	cout<<"sorted array is => \n";
	for (i = 0; i<n; i++)
	{
		cout<<a[i]<<"\n";
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

	insertion_sort(arr,n);
	return 0;
}