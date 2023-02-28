//input and display the elements of string using pointer.
#include <iostream>

using namespace std;

int main()
{
    string name[5];
    string*ptr;
    ptr=name;

    cout<<"Please! Enter the name of Students: \n";
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". ";
        cin>>*(ptr+i);
    }

    cout<<"Now List of the name of the Students: \n";
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". "<<*(ptr+i)<<endl;;
    }
    return 0;
}
