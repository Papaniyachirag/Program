//Write a C++ program to demonstrate use of Destructor. 
#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
		rectangle()
		{
			cout<<"Enter length of Rectangle ::";
			cin>>l;
			cout<<"Enter Bredth of Rectangle ::";
			cin>>b;
			
			cout<<"Area of Rectangle is ::"<<l*b;
		}
		
		~rectangle(){}
		
};
int main()
{
	cout<<"PAPANIYA CHIRAG"<<endl;
	cout<<"220130318059"<<endl;
	rectangle r1;
	
	return 0;
}
