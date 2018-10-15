#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N , q , i , j , x ;
    int size = 0 , element = 0;
    int index , size_index;

    cin>>N>>q;
    std::vector<double> final_array;
    std::vector<double> array;
    std::vector<double> array_size;

    for(int k = 0 ; k<N ; k++)
    {
        cin>>size;
        array_size.push_back(size);
        for(int i = 0 ; i<size ; i++)
            {
                cin>>x;
                array.push_back(x);
            }

    }
    for (int j = 0 ; j<q ; j++)
    {
        cin>>size_index>>index;
        if (size_index == 0)
            final_array.push_back(array[index]);
        else 
        {   
            element = 0;
            for (int l = 0 ; l<size_index; l++)
            {
                element = element + array_size[l];
            }
            final_array.push_back(array[element+index]);

        }

    }

    for (int j = 0 ; j<q;  j++)
    {
        cout<<final_array[j]<<endl;
    }
       
    return 0;
}