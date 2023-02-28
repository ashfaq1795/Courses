//post addition *p++. its mean first display and then add 1.
#include <iostream>

using namespace std;

int main()
{
    int x=4;
    int* p=&x;

    cout<<"p: "<<p<<endl;
    cout<<"*P: "<<*p<<endl;
    cout<<"*p++: "<<(*p)++<<endl; //it will display 4 rather than 5 because it first dereference then display and then add 1 with 4.
    //if we display *p again it will give 5 i,e
    cout<<*p<<endl;

    return 0;
}
