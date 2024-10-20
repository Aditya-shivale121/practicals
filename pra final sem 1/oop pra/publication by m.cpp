#include <iostream>
#include <string.h>
using namespace std;

class publication
{ public:
   char title[30];
   float price 	;
   publication()
   {
   	strcpy(title,"MCOE");
   	price=1;
   }
};

class book:public publication
{public:
  int page_count;
  book()
  {
    page_count=2;	
  }	
  void accept()
  {
  	cout<<"enter book title ";
  	cin>>title;
  	cout<<"enter book price ";
  	cin>>price;
  	cout<<"enter total pages ";
  	cin>>page_count;
  }
  void display()
  {
  	cout<<"title of the book is = "<<title<<endl;
  	cout<<"book of the price is = "<<price<<endl;
  	cout<<"total pages of the book is = "<<page_count<<endl;
  }
  
  
};

class casseet : public publication
{ public:
  float time ;	
  casseet ()
  {
  	time=1;
  }
  void accept ()
  {
  	cout<<"enter casseet title "<<endl;
  	cin>>title;
  	cout<<"enter casseet price "<<endl;
  	cin>>price;
  	cout<<"enter time of casseet "<<endl;
  	cin>>time;
  }
  void display ()
  {
  	cout<<"title of the casseet is = "<<title<<endl;
  	cout<<"price of the casseet is = "<<price<<endl;
  	cout<<"time of the casseet is = "<<time<<endl;
  }
};

int main()
{
	int ch;
	cout<<"Enter 1 for Book "<<endl;
	cout<<"Enter 2 for casseet "<<endl;
	cin>>ch;
	book b1,b2;
	casseet c1,c2;
	switch (ch)
	{
		case 1 :
		         b1.accept();
		         b1.display();
		         break;
		
		case 2 : c1.accept();
				  c1.display();
				  break;
		
		default : cout<<"Enter correct choice "<<endl;
	}
}
