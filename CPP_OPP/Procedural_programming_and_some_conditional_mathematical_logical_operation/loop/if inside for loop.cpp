#include<iostream>
using namespace std;
int main()
{
	int x,y=0;
	cout<<"enter number: ";
	cin>>x;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
		{
			y=y+1;
		}
	}
	if(y==2)
	{
		cout<<x<<" is prime..";
	}
	else
	cout<<x<<" is unprimed";
}
