//here we will pass address of the argument to the function.
//and parameter of the function will be pointers.
//in this case no new variable will be created in function.
//any change with arguments in function will also change in main function'
//in case of passing value instead of arguments new variables will be created in user defined function.
//and any changes with arguments in user defined function will not appear in main function.
#include <iostream>

using namespace std;

void add(int*,int*);
int main()
{
   int x,y;
   cout<<"please Enter the value of x and y: \n";
   cout<<"x: ";
   cin>>x;
   cout<<"y: ";
   cin>>y;
   cout<<"\nThe value of x before function execution: "<<x<<endl;
   add(&x,&y);  //passing arguments
   cout<<"The Value of X after function execution: "<<x<<endl;  //x value also change in main function due to change in add function
    return 0;
}
void add(int* a,int* b)
{
    *a=*a+*b; //dereferencing
    cout<<"the Function value is: "<<*a<<endl;
}
