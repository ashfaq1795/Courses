//pre addition mean add 1 with value before its display.
#include <iostream>

using namespace std;

int main()
{
    int x=4;
    int* p=&x;
    //two cases in pre addition.
    //case-1
    cout<<"p: "<<p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"++*p: "<<++*p<<endl; //here first de reference then add 1 with 4 and then display.
    //case-2
    cout<<"*++p: "<<*++p<<endl; //here first add 1 with address of x and then display

    return 0;
}
