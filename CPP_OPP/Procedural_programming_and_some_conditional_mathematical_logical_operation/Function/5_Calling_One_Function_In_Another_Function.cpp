//we can call one function in another Function.
//The function which is to be call in another function must be return type function.
//function and parameter data types can be different. but input will be according to parameter data type and output will
//be according to function data type.
#include <iostream>

using namespace std;
//void input(int,int);      // we can not take argument in a user defined function like this input function.
//input argument alway be taken in main function().
void test(float,float);   // void return type because it do not return anything.
int add(float,float);    //  int return type because it return sum value in test function.

int main()
{
    float x,y;  //p and q are arguments
    cout<<"Please! Enter num1: ";
    cin>>x;
    cout<<"Please! Enter num2: ";
    cin>>y;
    test(x,y);
    return 0;
}
void test(float a,float b) //function 1
{
    if(a==0 || b==0)
    {
    cout<<"Sorry! Either num1 or num2 is Zero...";
    }
    else
    {
    add(a,b); //one function called in another user defined Function. if we comment this (29) line it still work.
    cout<<"The Sum Of "<<a<<" and "<<b<<" is: "<<add(a,b);
    }
}
int add(float a,float b)   //function 2
{
    return a+b;
    //or int x=a+b;  return x;
}


