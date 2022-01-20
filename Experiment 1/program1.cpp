#include <iostream>
using namespace std;

class Student
{
  string Name;
  int RNo;
  int Grade;
   public:
	 void read()
	 {
	   cout<<"Enter Student Name:";
	   cin>>Name;
	   cout<<"Enter Roll no:";
	   cin>>RNo;
	   cout<<"Enter Grade:";
	   cin>>Grade;
	 }
	 void display()
	 {
           cout<<"Name:"<<Name<<endl;
	   cout<<"Roll no:"<<RNo<<endl;
	   cout<<"Grade:"<<Grade<<endl;
	 }						        
};

int main()
{
  Student s[3];
  int i;
 for(i=0;i<3;i++)
 {
  s[i].read();
 }
 for(i=0;i<3;i++)
 {
  s[i].display();
 }
 return 0;
}

