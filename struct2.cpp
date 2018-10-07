#include <iostream>
#include <string>

// pointer to structures 
using namespace std;

void print(struct Student *s2);


struct Student{

	int age;
	int std;
	string f_name;
	string l_name;
};

int main() {

	struct Student s1;
	struct Student s2;

	cin>>s2.age;
	cin>>s2.std;
	cin>>s2.f_name;
	cin>>s2.l_name;
	struct Student *a1;
	a1 = &s1;
	cin>>s1.age>>s1.std>>s1.f_name>>s1.l_name;
	
	cout<<a1->f_name<<endl<<a1->std;

	print(&s2);
    return 0;
}

void print (struct Student *s1)
{
	cout<<s1->age<<endl<<s1->std<<endl<<s1->f_name<<endl<<s1->l_name<<endl;
}