//Return type function.
//Return type mean we can use return value of user defined function in main function or any other user define
//function and we can do any operation with this return value.
//here we consider calling function product(4,6) as a variable and then add 8 with it due to return type function.
//void return type is just used for cout while other than void like int are used to handle output in main function.
//the word "Return" return data or value to the calling function.
//function return only one value except string and array.
#include <iostream>
using namespace std;

int product(int,int);

int main()
{
    cout<<"The Sum is: "<<product(4,6)+8; //arguments 4 6. we can also take it from user.
//in line 12 we use return value in main() function due to return type of user define function and do some operation with it.
    return 0;
}
int product(int a,int b)  //a b parameters act as variables to store arguments.
{
    //return a*b; or
     int x=a*b;
     return x;
}
