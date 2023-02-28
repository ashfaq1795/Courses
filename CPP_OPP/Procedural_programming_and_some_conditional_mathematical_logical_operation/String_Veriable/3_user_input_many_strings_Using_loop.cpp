//single and multiple string using string syntax.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Single string.
    string s="Hello Ashfaq";
    cout <<s << endl;


    //Multiple string using for loop.
    string s1[5];
    for (int i=0; i<5; i++)
    {
    cout<<"please enter the name of student: ";
    getline(cin,s1[i]); //here we can give a space in name. the part of name after space will also print.
    //cin>>s1[i]; //we can not give space in name.the part after space will not print.
    }
    cout<<"the student names are: \n";
    for (int i=0; i<5; i++)
    {
    cout<<i+1<<")"<<s1[i]<<endl;
    }
    return 0;
}
