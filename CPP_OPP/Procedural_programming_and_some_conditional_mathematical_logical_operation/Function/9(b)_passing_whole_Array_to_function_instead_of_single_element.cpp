//passing whole array to function instead of passing single element of array to function in each iteration
#include <iostream>

using namespace std;
void display(int,int); //we will pass array name to int[] and size of array to int
int main()
{
    int array[5]={55,66,88,22,99}; //we can also put these elements from user in run time.
    display(array,5);
    return 0;
}
void display(int ids,int size) //ids=array   size=size of array.
{
    for (int i=0; i<size; i++)
    {
        cout<<"The Student ID is: "<<ids[i]<<endl;
    }
}
