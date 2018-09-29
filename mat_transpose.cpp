#include <iostream>

using namespace std;

int main()
{	
	int n =3 , m = 3;
	int A[10][10] , B[10][10] ;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			cin>>A[i][j];
	}

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			B[i][j] = A[j][i];
	}
	
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			cout<<A[i][j]<<"\t";
		cout <<endl;
	}
	
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ;  j < m ; j++)
			cout<<B[i][j]<<"\t";
		cout <<endl;
	}
	return 0;
	
}