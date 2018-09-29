#include <iostream>

using namespace std;

int main()
{
	int n = 3 , m = 3 , count = 2; 
	int A[10][10] , B[10][10] ;


	// enter the two matrices

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			cin>>A[i][j];
	}

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			cin>>B[i][j];
	}


	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			{
				A[i][j] =  A[i][j] + B[i][j];
				cout << A[i][j]<<"\t";
			}
			cout <<endl;	
	}
	
	return 0;
}