#include <iostream>

using namespace std;

double power(int x, int y);
double factorial(int x);
float sin(int x);

int main()
{
    int angle=70;
    cout << "The value of Sin(70) using built in function: " <<sin(70)<<endl;
    cout<<"The value of sin(70) using user talyor sries (user defined function: "<<sin(angle);
    return 0;
}
float sin(int x)
{
    int z=x-(power(x,3)/factorial(3))+(power(x,5)/factorial(5))-(power(x,7)/factorial(7));
    return z;
}

double power(int x, int y)
{
    int z=x;
    for(int i=1; i<=y; i++)
    {
        x=x*z;
    }
    return x;
}
double factorial(int x)
{
    if(x==0)
    {
        return 1;
    }
    return (x*factorial(x-1));
}
