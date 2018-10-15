#include <iostream>
#include <string>

using namespace std;

// find digits after decimals
string find()
{	
	int pos;
	string intstr;
	cin>>intstr;

	
	pos = intstr.find(".");
	cout<<pos<<endl<<string::npos<<endl;
	// pos = - 1 (not found) , string::npos = 18446744073709551615
	// -1 is equal to 18446744073709551615

	if (pos == string::npos)
	{
		return "";

	}
	else 
		return intstr.substr(pos+1);

}

// check all are digits or not
bool check()
{
	string intstr;
	cin>>intstr;
	// check all are digits or not
	int len = intstr.length();

	for (int i = 0 ; i < len; i++)
	{
		if (intstr.at(i) < '0' || intstr.at(i) > '9')
			return false ;

	}
	return true;
}	

// replace all the spaces by 
void apps()
{
	string url = "my name is ";

	cout<<url<<endl;
	while (url.find(" ") != string::npos  )
	{
		int n = url.find(" ");

		url.replace(n ,1 , "");

	}
	cout<<url<<endl;
}


int main()
{
	string s1("Abhishek is");
	cout<<s1<<endl;

	string s2(s1);
	cout<<s2<<endl;

	// intializtion by part from another strings
	// from 2nd index
	// 6 characters

	string s3(s1, 5 ,2);
	cout<<s3<<endl;

	// number of occurances
	string s4(4, '#');
	cout<<s4<<endl;

	string s5(s1.begin() , s1.begin()+6);
	cout<<s5<<endl;

	// assignment operator
	string s6 = s1;
	cout<<s6<<endl;

	// length of string
	cout<<s6.length()<<endl;
	// delete

	// char at
	cout<<s6.at(7)<<endl;

	// front and back
	cout<<"first char\n";
	cout<<s6.front()<<endl;
	cout<<"second char\n";
	cout<<s6.back()<<endl;

	const char* s7 = s1.c_str();
	cout<<"s7 =";
	cout<<s7<<endl;

	// string append
	s6.append(" ok ");
	cout<<s6<<endl;
	// append from another string
	//  position
	// no of chars
	s6.append(s1 , 0 ,4);
	cout<<s6<<endl;
	
	cout<<s6.find(s1)<<endl;

	if (s6.find(s1) != string::npos)
		cout<<"found at "<<s6.find(s1)<<endl;
	else
		cout<<"not found";
	cout<<s6.find("b")<<endl;
	cout<<s6.find(s1)<<endl;
	cout<<s6.find("x")<<endl;

	// substring s1.substr(a,b)
	cout<<s6.substr(1,5)<<endl;
	cout<<s6.substr(5)<<endl;

	// erase (a,b)
	s6.erase(2,5);
	cout<<s6<<endl;
	
	// replace (a,b,str)
	s6.replace( 1 , 5 , "5h ip 6");
	cout<<s6<<endl;
	s6.clear();
	cout<<s6<<endl;

	apps();
	//cout<<apps();
	return 0;

}