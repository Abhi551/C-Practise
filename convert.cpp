#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// remove spaces using sstream

int main()
{
	stringstream s;
	int a ;
	float b;
	cin>>a>>b;
	s<<a;
	// str() to convert the number to string
	string convert = s.str();
	cout<<convert;
	// convert string to number
	string s1;
	cin>>s1;
	stringstream ss(s1);

	ss>>a;
	cout<<a+5;
	return 0;
}