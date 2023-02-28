//passing argument to function.
#include <iostream>
using namespace std;

void add(int,int,char,string);
                   //In case of function declaration we define only data type of argument.we can also define parameter
                  //Here but in in complex program it will give error.
                 //Arguments are the values or characters which we pass pass from main function.
                //Argument are in the main function. it can be taken directly or during run time.
               // While parameter are those in which the arguments (numeric values or characters) stored.
               //Arguments will be according to parameters. int for int, char for char etc.
int main()
{
    int x,y;
    char z;
    string w;
    cout<<"please enter the value of x: ";
    cin>>x;
    cout<<"please enter the value of Y: ";
    cin>>y;
    cout<<"Please enter the character: ";
    cin>>z;
    cout<<"Please Enter your Address: ";
    cin>>w;
    //add(3,5); //we can also directly put arguments.
    add(x,y,z,w);     //or we can take from user during run time as above cin and cout.
    return 0;
}
void add(int a,int b,char c,string d)
{
    int x=a+b; //here we again declare x variable.we can do it. here it will work inside the parenthesis of user define function.
               //while in main function x will work inside the parenthesis of main function.
    cout<<"The Sum is: "<<x<<endl;
    cout<<"The char is: "<<c<<endl;
    cout<<"My Address is: "<<d<<endl;
}
