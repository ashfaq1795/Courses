//pointer having void data type can point variable of any data type.
#include <iostream>

using namespace std;

int main()
{
    int x=3;
    float z=4.5;
    void* ptr;   //void type pointer...
    ptr=&x;
    cout<<"&x: "<<&x<<endl;
    cout<<"ptr: "<<ptr<<endl;
    ptr=&z;
    cout<<"&z: "<<&z<<endl;
    cout<<"ptr: "<<ptr<<endl;
    return 0;
}
