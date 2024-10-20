#include <iostream>
using namespace std;

class student_data
{ public:
  int roll_no;
  char name[10];
 student_data()
 {
   roll_no=0;
   cout<<"welcome to stuent database system "<<endl;	
 } 
 void  accept()
  {
  	 cout<<endl<<"enter student roll no ";
  	 cin>>roll_no;
  	 cout<<endl<<"enter student name ";
  	 cin >> name;
  }
  
 void display (student_data a)
 {
 	cout<<endl<<"roll no of student is "<<a.roll_no;
 	cout<<endl<<"name of student is "<<a.name;
 }
 ~student_data()
 {
  cout<<endl<<"student data save sucessufully "; 	
 }
};

int main()
{
 student_data s1,s2;
 s1.accept();
 s2.display(s1);
}
