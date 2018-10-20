#include <iostream>
using namespace std;

void swap (int *x , int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;

}

int main()
{	int n;
	int arr[10];
	int flag;
	cin>>n;
	for (int i = 0 ; i<n ; i++)
	{
		cin>>arr[i];
	}

	for (int i = 1 ; i<n ; i++)
	{
		flag = 0;
		for (int j = 0 ; j<n-i ; j++)
		{
			if (arr[j] > arr[j+1])
			{	
				flag = 1;
				swap(&arr[j] ,  &arr[j+1]);
			}

		} 
		if (flag == 0)
		{
			break;
		}

	}
	for (int i = 0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}