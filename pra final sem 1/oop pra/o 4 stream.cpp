#include<iostream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
char name[20]; 
char msg[100]; 
cout<<"\n Enter your name="; 
cin>>name; 
ifstream fin; 
ofstream fout; 
fout.open("handling.txt"); 
fout<<"Your name is="<<name; 
fout.close(); 

cout<<"\n Data writing part completed...."; 
fin.open("handling.txt"); 
fin>>msg; 
cout<<"\n Data available in the file is as follows..."<<endl; 
cout<<msg; 
return 0; 
}

