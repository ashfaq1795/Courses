#include <iostream>
using namespace std;
 int main()
 {
 	int a;
 	cout<<"enter a";
 	cin>>a;
 	if(a%5==0)
 	   {
    	cout<<a<<" is multiple of 5";
	   }
	   else
	   cout<<a<<" is not multiple of 5";
	   cout<<endl;
 	if(a%7==0)
 		{
 	    cout<<a<<" is divisible by 7";
 	    }
 		else
 		cout<<a<<" is not divisible by 7";
		cout<<endl;	 
	if(a%11==0)
		{
 		cout<<a<<" is divisible by 11.";
 		}
 		else
 		cout<<a<<" is not divisible by 11.";
}
