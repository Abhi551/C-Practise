#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
class Array
{
private:
	 
	int size ;

public:

	Array()
	{	
		cout<<"constructor called\n";
		cin>>size;
	}

	T set(T arr[])
	{
		for (int i = 0 ; i<size; i++)
			cin>>arr[i];
		return 0;
	}


};

int main() 
{	
	int arr[100];
	Array <int>A;
	A.set(arr);
    return 0;
}