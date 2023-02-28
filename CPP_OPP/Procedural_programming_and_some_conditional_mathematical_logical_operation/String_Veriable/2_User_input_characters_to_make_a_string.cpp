//user input characters..
#include <iostream>

using namespace std;

int main()
{
   char x[5];
   cout<<"please enter characters in string: \n";
   for(int i=0; i<5; i++)
   {
       cout<<"x["<<i<<"]=";
       cin>>x[i];         //here we cannot put more than one character.
   }
   cout<<"the required String is: ";
   for(int i=0; i<5; i++)
   {
       cout<<x[i];
   }
    return 0;
}
