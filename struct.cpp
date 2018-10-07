#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct lib{
		int book_id;
		string book;
		string author;
		string subject;
};

struct food{
	int list;
	string  fruits;
	string vegetables;
 	string fast_food;
};

void input_func();
void output_func(struct food out_f);

int main()
{	
	int n;

	lib book[10];
	cout<<"n = ";
	cin>>n;
	// getting the struct members
	for (int i = 0 ;  i<n ;  i++)
	{		
		cout<<"detalis of book"<<i<<endl;
		cin>>book[i].book_id;
		cin>>book[i].book;
		cin>>book[i].author;
		cin>>book[i].subject;
	} 

	for (int i = 0 ; i<n ; i++)
	{
		cout<<book[i].book_id<<endl;
		cout<<book[i].book<<endl;
		cout<<book[i].author<<endl;
		cout<<book[i].subject<<endl;
	}
	
	//  declare variable of type struct 
	food f;
	cin>>f.list>>f.fruits>>f.vegetables>>f.fast_food;
	output_func(f);



	return 0;
}


void output_func(struct food out_f)
	{
		cout<<out_f.list;
		cout<<out_f.fruits;
	}
