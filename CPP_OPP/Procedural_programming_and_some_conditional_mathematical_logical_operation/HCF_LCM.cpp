#include <iostream>

using namespace std;

int hcf(int a,int b);
int lcm(int a,int b);
int main()
{
    int x,y;
    cout << "Please Enter num1: ";
    cin>>x;
    cout<<"Please Enter num2: ";
    cin>>y;
    cout<<"HCF of given two inputs is: "<<hcf(x,y)<<endl;
    cout<<"LCM of given two inputs is: "<<lcm(x,y);

    return 0;
}

int hcf(int a,int b)
{
    return b==0? a:hcf(b,a%b);
}

int lcm(int a,int b)
{
    int z=a*b;
    for(int i=2; i<=z; i++)
    {
        if(z%i==0 && i%a==0 && i%b==0)
        {
            return i;
        }
    }
}


