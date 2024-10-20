#include<iostream> 
#include<string.h> 
using namespace std; 
class publication 
{ 
protected: 
char title[20]; 
float price; 
publication() // Default constructor 
{ 
price=1; 
strcpy(title,"SNJB"); 
} 
}; 
class Book:public publication // Inheritance Declaration 
{ 
public: 
int page_count; 
Book() 
{ 
page_count=1; 
} 
void accept() 
{ 
cout<<"\n Enter the Title of the Book="; 
cin>>title; 
cout<<"\n Enter the price of the Book="; 
cin>>price; 
cout<<"\n Enter the page count of the Book="; 
cin>>page_count; 
} 
void display() 
{ 
cout<<"******************************************"; 
cout<<"Book Name="<<title<<endl; 
cout<<"Book Price="<<price<<endl; 
cout<<"Page Count="<<page_count; 
} 
}; 
class casette:public publication 
{ 
public: 
float timer; 
void accept() 
{ 
cout<<"\n Enter the title of the Casette="; 
cin>>title; 
cout<<"\n Enter the price of the casette="; 
cin>>price; 
cout<<"\n Enter the Time="; 
cin>>timer; 
} 
void display() 
{ 
cout<<endl<<"***************Casette Details***********"; 
cout<<"Cassette Name="<<title<<endl; 
cout<<"Cassette Price="<<price<<endl; 
cout<<"Timer="<<timer; 
} 
}; 
int main() 
{ 
int ch; 
cout<<"1)Book"<<endl; 
cout<<"2)Cassette"<<endl; 
cout<<"Enter your choice:"; 
cin>>ch; 
if(ch==1) 
{ 
Book obj1; 
obj1.accept(); 
obj1.display(); 
} 
else 
{ 
casette obj2; 
obj2.accept(); 
obj2.display(); 
} 
return 0; 
}
