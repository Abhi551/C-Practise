#include <iostream>

using namespace std;
int main()
 {
	int T , N , S ;
	int i , j , k , start , end;
	long double  sum1 ;
	long double sum2;
	sum1 = 0;
	sum2 = 0;
	double A[1000000];
	cout<<"Test Cases T = "<<endl;
	cin>>T;

	// enter the test cases
	for (i = 0 ; i < T ; i++)
	{
		cout<<"for test case "<<i<<endl;
	    // size and sum of the arrays
	    cout<<"N = "<<endl;
	    cin>>N;
	    cout<<"S = "<<endl;
	    cin>>S;
	    // enter the arrays
	    for (j = 0 ; j < N ; j++)
	    	{
	        	cin>>A[j];
	    	}
	    
	    for (j = 0 ; j < N ; j++)
	    {   
	        sum2 = S;
	        // starting index
	        start = j+1;

	        	cout<<endl<<endl;
	            // decrease sum2 by next element
            for (k = j ; k < N ; k++)
        		{
                	sum2 = sum2-A[k];
            		cout<<"sum2 = "<<sum2<<endl;
            		if (sum2 == 0)  
	            	{	
	            		//cout<<"this worked"<<endl;
	                	end = k+1;
	                	cout<<start<<"\t"<<end<<endl;
	                	break;
	                }
	                else if (sum2 < 0)	break;

        		}	
        	if (sum2 == 0)	break;
        	else if (j == N-1)
        	{
        		cout<<-1;
        	}

	    }
	       
	    
	}
	return 0;
}