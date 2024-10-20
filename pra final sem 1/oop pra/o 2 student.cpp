#include<iostream> 
using namespace std; 
class studentinfo 
{ 
public: 
int roll_no,class_name; 
char name[20],contact_address[30],telephone_number[20],driving_license_number[20],date_of_birth[10],blood_group[20]; 
void accept() 
{ 
cout<<"Enter your name="; 
cin>>name; 
cout<<"Enter your roll number="; 
cin>>roll_no; 
cout<<"Enter your class name="; 
cin>>class_name; 
cout<<"Enter your contact address="; 
cin>>contact_address; 
cout<<"Enter your telephone number="; 
cin>>telephone_number; 
cout<<"Enter your driving license number="; 
cin>>driving_license_number; 
cout<<"Enter your date of Birth="; 
cin>>date_of_birth; 
cout<<"Enter your blood group="; 
cin>>blood_group; 
} 
void display() 
{ 
cout<<"\n Your name is="<<name; 
cout<<"\n Your roll number is="<<roll_no; 
cout<<"\n Your class name is="<<class_name; 
cout<<"\n Your contact address 
is="<<contact_address; 
cout<<"\n Your telephone number 
is="<<telephone_number; 
cout<<"\n Your driving license number 
is="<<driving_license_number; 
cout<<"\n Your date of birth is="<<date_of_birth; 
cout<<"\n Your blood group is="<<blood_group; 
} 
}; 
int main() 
{ 
studentinfo obj; 
obj.accept(); 
obj.display(); 
return 0; 
}
