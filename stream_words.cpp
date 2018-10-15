#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
 	string str = "my name is abhishek is the name ";
 	stringstream s(str);
 	string word;
 	int count = 0;
 	string a;
 	// to add more strings
 	cin>>a;
 	s<<a;
 	// read till the end of stream
 	while(s>>word)
 	{
 		count++;
 		cout<<word<<endl;
 	}

 	cout<<count;
 	
 	// frequency of words
 	stringstream ss(str);
 	map<string , int> frequency;

 	while (ss>> word)
 	{
 		frequency[word]++;

 	}

 	// iterator for map
 	map<string , int> ::iterator m;

 	for (m = frequency.begin() ; m != frequency.end() ; m++)
 	{
 		cout<<m->first<<" - "<<m->second<<endl;
 	}

 	// convert int to strings
 	int b;
 	cin>>b;
 	// declare stringstream s1
 	stringstream s1;
 	// send number stringstream
 	s1<<b;
 	// convert to string by str()
 	string c = s1.str();
 	cout<<c;
	return 0;
}
