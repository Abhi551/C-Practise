#include <iostream>

using namespace std;

inline int cube(int s)
{
	return (s*s*s);
}

class inline_f
{
	int a , b ;

public:
	void add(int a ,int b);
	void sub(int a ,int b);
	void mul(int a ,int b);
	void div(int a ,int b);
};

inline void inline_f::add(int a , int b)
{
	cout<<(a+b);
}


inline void inline_f::sub(int a , int b)
{
	cout<<(a-b);
}


inline void inline_f::mul(int a , int b)
{
	cout<<(a*b);
}


inline void inline_f::div(int a , int b)
{
	cout<<(a/b);
}
int main()
{	

	cout<<cube(5)<<endl;
	inline_f f;
	f.add(5,5);
	f.sub(5,5);
	f.mul(5,5);
	f.div(5,5);

	return 0;

}