//user input elements in Two dimensional Array.
#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout << "please enter the size of row: ";
    cin>>r;
    cout << "please enter the size of coloumn: ";
    cin>>c;
    int x[r][c];
    cout<<"please enter the array elements!\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
        cout<<"x["<<i<<"]["<<j<<"]=";
        cin>>x[i][j];
        }
    }
    cout<<"The elements in Array are: \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
        cout<<"x["<<i<<"]["<<j<<"]="<<x[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

