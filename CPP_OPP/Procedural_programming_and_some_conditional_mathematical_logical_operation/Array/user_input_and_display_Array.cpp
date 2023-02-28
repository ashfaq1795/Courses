//user input elements in Array.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "please enter the size of aray: ";
    cin>>n;
    int x[n];
    cout<<"please enter the array elements!\n";
    for(int i=0; i<n; i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"The elements in Array are: \n";
    for(int i=0; i<n; i++)
    {
        cout<<"x["<<i<<"]= "<<x[i]<<endl;
    }
    return 0;
}
