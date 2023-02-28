#include <iostream>

using namespace std;

int main()
{
    string x="Hello world!";
    string* ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;  //if the pointer data type is void then we can not display *ptr in each case...
    return 0;
}
