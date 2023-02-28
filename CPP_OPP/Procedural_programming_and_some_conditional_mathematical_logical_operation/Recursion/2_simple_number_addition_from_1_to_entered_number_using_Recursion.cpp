//simple adding numbers from 1 to entered number using recursion.
#include <iostream>

using namespace std;
int add(int);
int main()
{
    int num;
    cout << "please! Enter Num: ";
    cin>>num;
    cout<<"Sum From 1 To "<<num<<" ="<<add(num);
    return 0;
}
int add(int x)
//if the input argument x is 0 or less than zero then it will return only such argument by default or we can also
//specify condition for 0 and less than zero just like specified in factorial program. if input argument is greater
//than 0 then it will return their sum...
{

    if (x>0)
    {
     return x+add(x-1);  //add function will call itself x-time.
     //if function data type is void then it will give error because we cannot add void with integer in line 22.
    }
}

