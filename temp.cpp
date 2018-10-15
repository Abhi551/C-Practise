#include <iostream>
using namespace std;

template <class T>
void func(T a)
{	
	cout<<a<<endl;
	cout<<"this is main class"<<endl;
}
template<>
void func(int a)
{	
	cout<<a<<endl;
	cout<<"this is special"<<endl;
}

int main()
{
	func<char>('a');
	func<int>(12);
	func<float>(12.5);
	return 0;
}