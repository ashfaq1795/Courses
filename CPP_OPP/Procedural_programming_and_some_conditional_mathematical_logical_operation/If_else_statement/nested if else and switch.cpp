#include <iostream>
using namespace std;
int main()
{
	int y;
	cout<<"please ente y: ";
	cin>>y;
 /*	if(y==1)
	{
		cout<<" a";
	}
	else if(y==2)
	{
		cout<<"b";
	}
	else if(y==5)
	{
		cout<<"c";
	}
	else 
	cout<<"d";*/
	switch(y) 
	{
	case 1: 
	cout<<"a";
	break;
	case 2:
	cout<<"b";
	break;
	case 3:
	cout<<"c";
	break;
  default: 
  cout<<"wrong";
  break;
}
}
