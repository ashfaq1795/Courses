#include <iostream>

using namespace std;
void search(int*,int*);

int main()
{
    int x,y;
    cout << "please! Enter the size of array: ";
    cin>>x;
    int arr[x];
    cout<<"Please! Enter the Array Elements: \n";
    for(int i=0; i<x; i++)
    {
        cout<<"x["<<i+1<<"]=";
        cin>>arr[i];
    }
    cout<<"please enter the index no you want to display its element: ";
    cin>>y;
    search(arr,&y); //we cannot write &arr. because we pass whole array
    return 0;
}
void search(int* a,int* b) //here a is a pointer pointing arr. pointer a by default pointing first element of array
{
    cout<< *(a+(*b-1)); //here if we print *a it will give first element of array. we increment address of a by *b-1 number to
                       //print element at *b index. if we write b-1 it will give error. because b is address and we subtract
                       //address from 1 then add with address of a which is invalid it will give us error basically we need to
                       //increment address of a by *b-1 no.
}
