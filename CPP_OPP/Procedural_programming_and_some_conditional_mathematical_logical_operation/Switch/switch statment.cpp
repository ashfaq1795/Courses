#include <iostream>
using namespace std;
 int main()
 {
 	char x;
 	cout<<"1. A for apple.\n";
 	cout<<"2. B for ball.\n";
 	cout<<"3. C for cat.\n";
 	cout<<"4. D for dog.\n";
 	cout<<endl;
 	cout<<"please enter required char";
 	cin>>x;
 	switch(x)
 	{
	 
 	case 'a':
 		cout<<"A for apple";
 		break;
 			case 'b':
 				cout<<"b for ball";
 				break;
 				case 'C': 
 				cout<<"c for cat";
 				break;
 				case'D':
 					cout<<"D for dog";
 					default:
 						cout<<"invalid input";
 						break;
 				
 }
 }
