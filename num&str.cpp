#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;
int random(int n);

int main()
{	
	int n;
	cin>>n;
	random(n);

	// strings
	char c[10] ="Abhishek";
	cout<<c<<endl;

	string a , b ;
	a = "abhisek";
	cin>>b;
	cout<<"\n"<<b;
	return 0;

}

int random(int n)
{

	int i , j;
	srand((unsigned)time(NULL));

	for (i = 0 ; i < n ; i++)
	{
		j = rand();
		cout<<"random number is "<<j<<endl;
	}

	return 0;
}