//a function which is called within the same function or a function that calls itself is called recursion.
//see this example in copy or on youtube  to explain algorithm
#include <iostream>

using namespace std;
long factorial(int);
int main()
{
    int x;
    cout<<"please! Enter an Integer: ";
    cin>>x;
    cout<<"Factorial of "<<x<<" is: "<<factorial(x);
    return 0;
}
long factorial(int z)
{
    if(z==0)
    {
    return 1;
    }
    if(z<0)
    {
    return -1; //-1 mean you entered wrong no.
    }
    else
    {
    return (z*factorial(z-1)); //function call itself  z-time.
    }
}
