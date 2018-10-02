#include <iostream>
#include <vector>
#include  <cstdlib>

using namespace std;

int main()
{
	vector<int> v;

	for (int i = 0 ;  i<5;  ++i)
	{	
		v.push_back(i);
	}
	//cout<<v;

	cout<<endl;
	
	// output from begin to end
	for (auto i = v.begin() ; i != v.end() ; i++)
		cout<<*i<<" ";
	
	// output from cbegin (constant interator to first element)
	
	cout<<endl;

	for (auto i = v.cbegin() ; i != v.cend() ; i++)
		cout<<*i<<" ";

	cout<<endl;
	
	// output from rbegin (reverse iterator pointing to last element)

	for (auto i = v.rbegin() ; i != v.rend() ; ++i )
		cout<<*i<<" ";
	
	cout<<endl;
	// output from crbegin (constant reverse iterator pointing to last element)
	for (auto i = v.crbegin() ; i != v.crend() ; ++i)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<endl;

	cout<<"size of array "<<v.size()<<endl;
	cout<<"max size of array "<<v.max_size()<<endl;
	cout<<"capacity of array "<<v.capacity()<<endl;
	
	//resize array
	v.resize(4);
	cout<<"new size of array is "<<v.size()<<endl;
	

	cout<<v.empty()<<endl;
	cout<<v[2]<<endl;
	cout<<v.at(2)<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;

	// returns the pointer to first element in tha array
	int *i = v.data();

	return 0;
}
