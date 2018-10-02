#include <iostream>
#include <cmath>
using namespace std;

double converter(int);

int main()
{
	converter(12);
	return 0;
}

double converter(int mpg)
{
    // do your magic
    double kpl;
    kpl = (mpg*1.609344)/4.54609188 ;
    cout<<round(kpl*100)<<endl;
    cout<<round(kpl*100)/100; 
    return 0;
}