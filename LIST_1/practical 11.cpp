#include<iostream>
using namespace std;
int main()
{
	char ch,uppervowel,lowevowel;
	cout<<"Chirag Papaniya"<<endl;
	cout<<"220130318059"<<endl;
	cout<<"Enter Character ::";
	cin>>ch;
	
	
	uppervowel=(ch='a' || ch='e' || ch='i' || ch='o' || ch='u');
	lowervowel=(ch='A' || ch='E' || ch='I' || ch='O' || ch='U');
	if(uppervowel || lowervowel) 
	{
		cout<<"Vowel Character ::"<<ch;
	}
	else
	{
		cout<<"Consonant Character ::"<<ch;
	}
	
	return 0;
}
