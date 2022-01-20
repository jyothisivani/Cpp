#include<iostream>
using namespace std;
#include<string.h>
class Student
{
	string Name;
	int RNo;
	public:
		void read()
		{
			cout<<"Enter Name:";
			cin>>Name;
			cout<<"Enter Roll No:";
			cin>>RNo;
		}
		void display()
		{
			cout<<"Name:"<<Name<<endl;
			cout<<"RollNo:"<<RNo<<endl;
		}
};

int main()
{
	Student s;
	Student *ptr;
	ptr = &s;
	(*ptr).read();
	(*ptr).display();
	return 0;
}

