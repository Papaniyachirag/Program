#include <iostream>
using namespace std;
int add;
int &sum(int a,int b);
int main()
{
    int a,b,answer;
	cout<<"Papaniya chirag"<<endl;
	cout<<"220130318059"<<endl;

    cout<<"Enter The A ::";
    cin>>a;
    cout<<"Enter The B ::";
    cin>>b;
    answer= sum(a,b);
    cout << "Sum of " <<a<<" + "<<b<<" is :: "<< answer <<endl;
}
int &sum(int a,int b){
    add=a+b;
    return add;
}

