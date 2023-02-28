//Function basic syntax.
#include <iostream>
void myfunction();  //data type may be int float char etc.
//declaration always before main() function.
using namespace std;

int main()
{
    cout<<"This is main function Statement:\n";
    myfunction();                          //Function calling. calling will be without data type.
    cout<<"This is main Function Statement:\n";

    return 0;
}
void myfunction() //Definition may be before or after main() function.
{
    cout<<"This is Function Statement:\n";
}
