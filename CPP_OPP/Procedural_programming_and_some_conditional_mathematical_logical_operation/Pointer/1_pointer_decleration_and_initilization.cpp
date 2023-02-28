//once pointer declared we cannot redeclare it.
//so in this example first we declare ptr and then p.
#include <iostream>

using namespace std;

int main()
{
    //two type of initialization.
    int x=3;
    //1) initialization during decleration
    int* ptr=&x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //de-referencing operator. it give value of pointed variable.

    //2) initialization after declaration
    int* p;
    p=&x; //here no need to use * sign again otherwise it will give some other meaning.
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; //de-referencing operator. it give value of pointed variable.
    return 0;
}
