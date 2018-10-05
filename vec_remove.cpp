#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N , u , l ;
    long long int x;
    vector<long long int> v;
    cin>>N;
    for (int i = 0 ; i<N; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>x;
    cin>>l>>u;
    v.erase(v.begin()+1);

    
    v.erase(v.begin()+1 , v.begin()+3);
    cout<<"size = "<<v.size()<<endl;
    for(auto i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<"\t";
    }
    
    return 0;
}
