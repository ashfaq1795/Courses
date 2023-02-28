#include <iostream>
using namespace std; 
int main()

{
float a,b;
char opp;
cout<<"please enter num1: ";
cin>>a;
cout<<"please enter operator: ";
cin>>opp;
cout<<"please enter num2: ";
cin>>b;

if (opp=='+')
cout<<a<<"+"<<b<<"="<<a+b;
else 
if (opp=='-')
cout<<a<<"-"<<b<<"="<<a-b;
else
if (opp=='*')
cout<<a<<"x"<<b<<"="<<a*b;
else
cout<<a<<"/"<<b<<"="<<a/b; 

}
