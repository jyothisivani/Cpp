#include<iostream>
using namespace std;
#include<string.h>
struct Person
{
	string Name;
	int Age;
};

int main()
{
	struct Person p;
	cout<<"Enter Name:";
	cin>>p.Name;
	cout<<"Enter Age:";
	cin>>p.Age;
	cout<<"Name:"<<p.Name<<endl;
	cout<<"Age:"<<p.Age<<endl;

	return 0;
}

