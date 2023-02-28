//default parameter is only way in which arguments pass from user defined function.(Default arguments).
//without default we can't pass arguments from user defined function. argument must pass from main function to parameter.
#include <iostream>

using namespace std;
void defaultparameter(string name="Ashfaq Ahmad",int roll_no=191795,char x='A') //default parameters
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No:"<<roll_no<<endl;
    cout<<"X:"<<x<<endl;
}
int main()
{
    defaultparameter(); //calling function without parameter.
    return 0;
}
