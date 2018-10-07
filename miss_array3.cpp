
using namespace std;

int main()
{
    int N_test;
    int N;
    // dynamic array is used
   	cout<<"enter the test cases " ;
    cin >> N_test;
	for (int k = 0 ; k<N_test ; k++)
	{   int sum = 0;
	    int sum_array = 0; 
	    cout<<"enter the array size";
	    cin>>N;
	    sum = (N*(N+1))/2;
		int *array = NULL;
		array = new int[N-1]; 
		for (int i = 0 ; i<N-1 ; i++)
		{   
		   	cin>>array[i];
		   	sum_array = sum_array + array[i];
		}
		cout<<sum-sum_array<<endl;  
	}
	
	return 0;
    
}