#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	typedef map<string,int> mapType;
	mapType population;
	population.insert(pair<string,int>("maha",1000));
	population.insert(pair<string,int>("goa",200));
	
	string state_name;
	mapType::iterator iter;
	cout<<endl<<"enter state name ";
	cin>>state_name;
	iter=population.find(state_name);
	if(iter!=population.end())
	{
		cout<<"\nthe population of state "<<state_name<<" is "<<iter->second;		
	}
    else
    {
    	cout<<"key is not found "<<endl;
    	population.clear();
	}

}	

