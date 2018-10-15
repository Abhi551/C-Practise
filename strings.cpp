#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

	std::vector<int> numbers;
	string rep;
	int n , num;
	while (str.find(",") != -1)
	{
		n = str.find(",");
		rep = str.substr(0 , n);
		//cout<<rep<<endl;
		stringstream ss(rep);
		ss>>num;
		numbers.push_back(num);
		str.replace(0,n+1,"");
		//cout<<str<<endl;
	}
	stringstream ss(str);
	ss>>num;
	numbers.push_back(num);
	return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}