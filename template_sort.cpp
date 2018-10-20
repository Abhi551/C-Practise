// using template  for bubble sort
#include <iostream>

using namespace std;

void swap(int *x , int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
template <typename T>
void bubble(T a[] ,  int n)
{	
	int flag = 0;
	for (int i = 1; i<n; i++)
	{
		for (int j = 0; j<n-i; j++)
		{	
			flag = 0;
			if (a[j] > a[j+1])
				{
					swap(&a[j] , &a[j+1]);
					flag = 1;
				}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int main()
{	
	int a[5] = {50,1,5,2,6};
	bubble<int>(a , 5);
	for (int i = 0 ; i<5; i++ )
	{
		cout<<a[i]<<" ";
	}
	return 0;
}