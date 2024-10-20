//file handeling 

#include<iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
   string msg,name;
   int p,price;
   cout<<endl<<"enter product name  ";
   cin>>name;
   cout<<endl<<"enter product value ";
   cin>>price;
   
   ifstream fin;	
   ofstream fout;
   fout.open("tej.txt");
   fout<<name<<endl;
   fout<<price;
   fout.close();
   
   cout<<endl<<"data writing sucessully "<<endl;
   
   fin.open("tej.txt");
   fin>>msg;
   fin>>p;
   cout<<"title of the is "<<msg;
   cout<<endl<<"price is "<<p;
   cout<<endl<<"data reading sucessully ";
   return 0;
}
