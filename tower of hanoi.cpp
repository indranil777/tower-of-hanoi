#include <iostream>
using namespace std;
void toh(int ,char,char,char);
int main()
{	char a,b,c;
	int x;
	a='A'; 
	b='B'; 
	c='C'; 
	cout<<"Enter value of discs";
	cin>>x;
	toh(x,a,c,b);
	return 0;
}
void toh(int x,char a ,char c,char b)
{
	if(x==1)
	{     cout<<"Move the disc 1 from "<<a<<" to "<<c<<endl; /
		x=x-1;
	}
	else
	{
		toh(x-1,a,b,c) ; 
        cout<<"Move the disc "<<x<<" from"<<a<<" to "<<c<<endl;
		toh(x-1,b,c,a); 
	}
}
