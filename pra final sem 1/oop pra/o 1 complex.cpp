#include<iostream> 
using namespace std; 
class complex 
{ public:
 
int real,img; 
complex() 
{ 
real=0; 
img=0; 
} 
void display() 
{ 
if(img<0) 
{ 
cout<<real<<img<<"i"<<endl; 
} 
else 
cout<<real<<"+"<<img<<"i"<<endl; 
} 

void accept() 
{ 
cout<<"\n Enter the real number="; 
cin>>real; 
cout<<"\n Enter the imaginary number="; 
cin>>img; 
} 

complex operator+(complex a) 
{ 
complex temp; 
temp.real=real+a.real; 
temp.img=img+a.img; 
return temp; 
} 
complex operator*(complex b) 
{ 
complex temp; 
temp.real=((real*b.real)-(img*b.img)); 
temp.img=((real*b.img)+(img*b.real)); 
return temp; 
} 
}; 

int main() 
{ 
complex obj1,obj2,result; 
cout<<"Enter the first complex number="; 
obj1.accept(); 
cout<<"\n Enter the second comlex number="; 
obj2.accept(); 
obj1.display(); 
obj2.display(); 
result=obj1+obj2; 
cout<<"\n Addition of two complex number is: "; 
result.display(); 
result=obj1*obj2; 
cout<<"\n Multiplication of two numbers is : "; 
result.display(); 
return 0; 
}
