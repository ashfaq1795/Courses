#include<iostream>
using namespace std;
 int main ()
 {
 	int a;
 	cout<<"please enter num: ";
 	cin>>a;
 	if(a%5==0)
 	{
 	cout<<a<<" is multiple of 5.";
 	if (a%7==0)
 	{
 		cout<<a<<" is divisible by 7";
 		if(a%11==0)
 		{
 			cout<<a<<" is divisible by 11";
 		}
 		else
 			cout<<a<<" is not divisible by 11";
	}
		 cout<<a<<" is not divisible by 7";
}
 	else
 	cout<<a<<"is not multiple of 5";
    }

