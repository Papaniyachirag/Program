#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Chirag Papaniya"<<endl;
	cout<<"220130318059"<<endl;
	cout<<"Enter A ::";
	cin>>a;
	cout<<"Enter B ::";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\nSwap number -->";
	cout<<"\nNumber A is ::"<<a;
	cout<<"\nNumber B is ::"<<b;
	
	return 0;
}
