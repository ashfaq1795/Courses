//backward transfer of control of program.
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char x;
    cout << "Hello world!" << endl; //this statement will execute only once.
    z:
    cout<<"please enter a: ";
    cin>>a;
    cout<<"please enter b: ";
    cin>>b;
    cout<<"the sum of both integers is: "<<a+b<<endl;
    cout<<"Do you want to perform this process again? press Y for again or press N for termination.\n";
    cout<<"key: ";
    cin>>x;
    if(x=='y')
    {
        goto z; //in case of backward transfer, goto statement must be closed in condition, otherwise it make infinite loop.
    }
    cout<<"condition false"; //this statement will also execute only once at the end if the above " if " condition false.

    return 0;
}
