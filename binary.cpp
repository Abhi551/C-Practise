#include <iostream>

using namespace std;

int binary(int arr[] , int l , int u , int x );

int main()
{	
	// dynamic array
	int N;
	cin>>N;
	int array[100];

	for (int i = 0 ;  i<N ; i++)
	{
		cin >> array[i];
	}
	int x;
	cin>>x;
	int ret ;
	ret = binary(array , 0 , N , x);
	if (ret == -1)
	{
		cout<<"element not found";
	}
	else cout<<"element found at "<<ret<<endl;
	return 0;
}

int binary(int arr[] , int l , int u ,  int x)
{	
	int mid;

	if (u>=l)
	{


		mid = l+(u-l)/2 ;
		if (arr[mid] == x)
		{
			return (mid);
		}

		if (arr[mid] > x)
		{	
			//cout<<arr[mid]<<endl;
			// if return is not introduced then in many cases it will not return the index found
			return(binary(arr , l , mid-1 , x));
		}

		if (arr[mid] <  x)
		{	
			//cout<<arr[mid]<<endl;
			return(binary(arr , mid +1 , u , x));
		}
	}
	return -1;
}