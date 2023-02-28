#include <iostream>
using namespace std;
 int main()
 {
 	char a;
 	cout<<"please enter char: ";
 	cin>>a; 
 	if(a=='a' && a=='e' && a=='i' && a=='o' && a=='u') //we can also write || instead of &&
 	cout<< a <<" is vowel ";
 	else 
	 cout<<a<<" is consunent.";
 }
