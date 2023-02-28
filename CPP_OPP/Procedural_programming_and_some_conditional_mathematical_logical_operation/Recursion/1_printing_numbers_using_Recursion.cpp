//simple printing numbers using Recursion....
#include <iostream>

using namespace std;
void display(int);
int main()
{
    int num;
    cout<<"please! Enter Num: ";
    cin>>num;
    display(num);
    return 0;
}
void display(int x)
{
    static int z=1; //if we remove static then it will make infinite loop and will print only 5 infinity time.
    //in case of static, static line 16 will execute one time and assigned 1 to z while in other case it will ignored.
    if (z<=x)
    {
        cout<<x<<"*"<<z<<"="<<x*z<<endl;
        z++;
        display(x);  //recursion, function 'display' call itself
    }
}
