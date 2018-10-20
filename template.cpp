#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// template function
template <typename T>
T function(T x , T y)
{
	return (x+y);
}
// template specialization in c++
template <>
float function(float a , float b)
{
	return (25);
}
int main() 
{	
	// calling a function 
	cout<<function<int>(45,56)<<endl;
    cout<<function<string>("abhi","shek")<<endl;
    cout<<function<float>(4.2,5.6)<<endl;
    return 0;
}