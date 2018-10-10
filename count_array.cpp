#include <iostream>

using namespace std;
int main()
 {
	int T , N ;


	cout<<"Test Cases T = "<<endl;
	cin>>T;

	// enter the test cases

	for (int a = 0 ; a < T ; a++)
	{	
		// use dynamic array
		double *A = NULL;
		int i = 0 , l = 0 , m = 0 , n = 0 ; 

		cout<<"for test case "<<i<<endl;
	    // size of the arrays
	    cout<<"N = "<<endl;
	    cin>>N;
		A = new double [N];

	    // enter the arrays
	    for (i = 0 ; i < N ; i++)
	    	{
	        	cin>>A[i];
	    	}

	    // count 0 , 1 , 2 	 
	    for (i = 0 ; i < N ; i++)
	    	{
	    		if (A[i] == 0)
	    			l++;
	    		else if (A[i] == 1)
	    			m++;
	    		else if (A[i] == 2)
					n++;
	    	}

	    // re-write the array 
	    for(int i = 0 ; i < (l) ; i++ )
	    {	

	    	cout<<0<<" ";
	    	//A[i] = 0;
	    }
	    for(int i = l ; i < (l+m) ; i++)
	    {	
	    	cout<<1<<" ";
	    	//A[i] = 1;
	    }
		for (int i = (l+m) ; i < (l+m+n) ; i++)
		{	
			cout<<2<<" ";
			//A[i] = 2;
		}

		// print the sorted array
		/*
		for (int i = 0 ; i < (l+m+n); i++)
		{
			cout<<A[i];
		}
		*/
		cout<<endl;
	}

	return 0;
}