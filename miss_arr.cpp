#include <iostream>

using namespace std;
int main()
 {
    // dynamic array is used
	int N;
	cin>>N;
	int x ;
	
	for (int i = 0 ; i < N; i++ )
	{   
	    // every time initialize array to NULL pointer
	    int *arr = NULL;
	    
	    // size of array 
	    cin>>x;
	    
	    // allocate memory block for array
	    arr =  new int [x];
	    
	    for (int i = 0 ; i < x-1 ; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for (int i = 1 ; i <= x ; i++)
	    {
	        if (i != arr[i-1])
	        {
	            cout<<i;
	            break;
	        }
	    }
	    
	    delete [] arr;
	    arr = NULL;
	}
	return 0;
}