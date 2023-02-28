//we can also pass address of arguments instead of normal arguments (values).
//if we pass argument as value new variable in function is created and data is copied into it. if we do any changes in newly
//created variable no change will occur in original variable in main function.
//but if we pass argument as reference then no new variable is created, only address of argument is passed to function parameter
//now if we do any changes in reference variable then such changes also occur in original variable in main function like given
//example.
#include <iostream>

using namespace std;
void refrence(int &a,int &b)
{
    cout<<"Before Swapping : \n";
    cout<<"A="<<a<<" "<<"B="<<b<<endl;
    cout<<"After Swapping : \n";
    int z=a;
    a=b;
    b=z;
    cout<<"A="<<a<<" "<<"B="<<b<<endl;
}



int main()
{
    int x,y;
    cout << "Please! Enter The value of x: ";
    cin>>x;
    cout << "Please! Enter The value of y: ";
    cin>>y;
    refrence(x,y);
    cout<<"After Swapping in main function: \n"; //here changes also occur in reference case. while no change occur in value case.
    cout<<"A="<<x<<" "<<"B="<<y<<endl;
    return 0;
}

