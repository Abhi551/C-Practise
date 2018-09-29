#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

int main()

{
	int a[10];

	int i;

	for (i = 0 ;  i <10 ; i++)
	{	switch(i)
		{
			case 0:
				{
				cout<<i+1<<"st element is ";
				a[i] = 100*i+100;
				cout<<a[i];
				break;
				}

			case 1:
				{
				cout<<"\n\n";
				cout<<i+1<<"nd element is ";
				a[i] = 100*i+100;
				cout<<a[i];
				break;

				}

			case 2:
				{
				cout<<"\n\n";
				cout<<i+1<<"rd element is ";
				a[i]=100*i+100;
				cout<<a[i];
				break;
				}

			default :
				{
				cout<<"\n\n";
				cout<<i+1<<"th element is ";
				a[i]=100*i+100;
				cout<<a[i];
				break;
				}			
		}

	}
	cout<<endl;
	return 0;
}