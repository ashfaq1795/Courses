//in this program we pass single element of array to function in each iteration
//we can never make input function for inputing array elements. because arguments alway given in main function.
#include <iostream>

using namespace std;
int show(int);


int main()
{
    int x;
    cout << "please! Enter the size of Array: ";
    cin>>x;
    int marks[x]; //we can also hard code array like marks[5]={33,45,66,56,76};
    cout<<"Please! Enter Array Elements:\n";
    for(int i=0; i<x; i++)
    {
       cout<<"Marks["<<i<<"]=";
       cin>>marks[i];
    }
    for (int i=0; i<x; i++)
    {
     show(marks[i]); //function called five time. we can also display function value here
    //show function will be called five time. in each call it will take new value as argument and print it.
    }

    return 0;
}
int show(int marks)
{
    cout<<marks<<" "<<endl;
}
