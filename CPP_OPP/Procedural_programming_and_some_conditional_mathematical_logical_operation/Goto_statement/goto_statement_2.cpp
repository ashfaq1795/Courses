//Backward movement of control of Program by using goto statement.
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Gay!" << endl;
    int x;
    cout<<"please enter num: ";
    cin>>x;
    if(x%2==0)
    {
        goto x1;
    }
    else
    {
        cout<<"the number is odd";
    }
    x1:
    cout<<"the number is even\n";

    return 0;
}
