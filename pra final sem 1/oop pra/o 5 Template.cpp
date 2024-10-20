#include<iostream> 
using namespace std; 
template<class T> 
class sorting 
{ 
public: 
T a[]; 
int n; 
void accept() 
{ 
cout<<"\n Enter how many numbers you want="; 
cin>>n; 
cout<<"\n Enter the elements="; 
for(int i=0;i<n;i++) 
{ 
cin>>a[i]; 
} } 
void display() 
{ 
for(int i=0;i<n;i++) 
{ 
cout<<a[i]<<endl; 
} } 
void sort() 
{ 
for(int i=0;i<n;i++) 
{ 
for(int j=i+1;j<n;j++) 
{ 
if(a[j]<a[i]) 
{ 
T temp; 
temp=a[i]; 
a[i]=a[j]; 
a[j]=temp; 
} } } } }; 
int main() 
{ 
sorting<int>s1; 
sorting<float>s2; 
int ch; 
cout<<endl<<"Enter 1 for int ";
cout<<endl<<"Enter 2 for float ";
cout<<endl<<"Enter your choice="; 
cin>>ch; 
if(ch==1) 
{ 
s1.accept(); 
cout<<"1.Integer sorting numbers are="<<endl; 
s1.sort(); 
s1.display(); 
} 
else 
{ 
s2.accept(); 
cout<<"2.Float sorting numbers are="<<endl; 
s2.sort(); 
s2.display(); 
} 
return 0; 
}

