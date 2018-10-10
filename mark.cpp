#include <iostream>

using namespace std;

// Write your Student class here

class Student 
{
public:
    int N;
    float arr[5];

    void input ()
    {
    	for (int i = 0 ; i < 5 ; i++)
    	{
    		cin>>arr[i];
    	}
    }

    int calculateTotalScore()
    {
    	return (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]);
    }
};

int main()
{	
	int store , store_else , count = 0;
	Student S;
	cin>>S.N;

	for (int i = 0 ; i < S.N ; i++)
	{
		S.input();
		if (i ==0)
		{
			store = S.calculateTotalScore();
		}
		else
		{	
			store_else = S.calculateTotalScore();
			if (store < store_else)
			{
				count++;
			}
		}
	}

	cout<<count;
	return 0;
}