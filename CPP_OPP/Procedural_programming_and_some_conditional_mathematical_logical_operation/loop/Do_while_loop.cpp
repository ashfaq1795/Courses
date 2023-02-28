//it will execute at once even if the condition is false.
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"please enter the value of x: ";
    cin>>x;
    do
    {
     cout << "Hello world!" << endl;
    }
    while(x!=5);

    return 0;
}
