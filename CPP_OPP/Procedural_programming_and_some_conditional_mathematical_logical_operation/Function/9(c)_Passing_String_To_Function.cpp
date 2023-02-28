#include <iostream>
#include <string.h>
using namespace std;

void check(string[],int,string);  //String Array passed
int main()
{
    int a;
    cout<<"Please Enter the Size of String: ";
    cin>>a;
    string b[a],c;
    for(int i=0; i<a; i++)
    {
        cout<<"Please! Enter The Student Name: ";
        cin>>b[i];
        //getline(cin,b[i]);
    }
    cout<<"\n\nNow, Please Enter the name You want To search: ";
    cin>>c;
    check(b,a,c);   //Array name=b   Array size=a
    return 0;
}
void check(string names[],int x, string y)
{
    int z;
   for (int i=0; i<x; i++)
   {
       if(names[i]==y)
       {
        z=1;
       }
    }
   if (z==1)  //if "if statement" come inside for loop we can only do this method to display given two message.
   {
    cout<<"Yes! The Name you want to search is present...";
   }
   else
   {
    cout<<"Sorry! The Name you want to search is not present...";
   }
}
