#include <iostream>

using namespace std;

int linear_search(int arr[] , int x , int n);

int main()
{
 	int N_test;
    // dynamic array is used
    cout<<"enter the test cases " ;
    cin >> N_test;
	int N , flag;
	for (int k = 0 ; k<N_test ; k++)
	{	
		cout<<"enter the size of array"<<endl;
		cin>>N;
		int *array = NULL;
		array = new int[N-1]; 
		cout<<"enter the arrays"<<endl;
		for (int i = 0 ; i<N-1 ; i++)
		{
			cin>>array[i];
		}

		int count = 0;
		// perform linear search on every element
		for (int i = 1 ; i <= N ; i++)
			{	flag = 0 ;
				for (int j = 0 ; j < N-1 ; j++)
				{	
					//cout<<array[j]<<endl<<i<<endl;
					if (array[j] == i)
					{
						flag = 1;
						break;
					}
				}
				if (flag == 0)
					{
						cout<<i<<endl;
						delete [] array;
						array = NULL;
						break;
					}


			}

	}
	return 0;
}

