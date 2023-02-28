#include <iostream>

using namespace std;

int factorial1(int x)  //1st method
{
    if(x==0)
    {
        return 1;
    }
        return (x*factorial1(x-1));

}
void factorial2(int y)  //2nd method.
{
    int fact=1;
    for(int i=1; i<=y; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is: "<<fact;
}

int main()
{
    cout << "Factorial is: " << factorial1(5)<<endl;
    factorial2(0);
    return 0;
}
