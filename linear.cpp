#include <iostream>


// linear seaech using dynamic array
using namespace std;

int linear_search(int arr[] , int N , int x);

int main()
{
	int N;
	int flag;
	cout<<"enter the number of elements"<<endl;
	cin>>N;

	// dynamic array
	int *d_arr = new int[N];
	for (int i = 0 ; i<N ; i++)
	{
		cin>>d_arr[i];
	}
	int x;
	cout<<"element to be searched"<<endl;
	cin>>x;
	flag = linear_search(d_arr , N , x);
	if (flag == 0)
	{
		cout<<"element not found";
		return 0;
	}
	else 
	{
		cout<<"element found at "<<flag<<endl;
		return 0;
	}
}

int linear_search(int *arr , int N , int x)
{	
	for(int i = 0; i<N ; i++)
	{
		if (x == *(arr+i))
		{
			return i;
		}
	}
	return 0;
}