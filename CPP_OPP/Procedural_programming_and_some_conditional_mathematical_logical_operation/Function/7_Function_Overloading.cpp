//Function overloading is define as multiple function can have  same name with different parameters.
//we can also use overloading phenomena for multiple function doing different work. e:g add and product two function
//perform two different work we can give same name as x but different parameters i,e for add float and for product int.
// but here we can give different name due to different work. so no need to use overloading phenomena in this case.
//Usually we use overloading phenomena for multiple function doing same work like given example. still here we can give
//different names for all functions like x and y in given case, but instead of defining two function that should do same
// thing, it is better to overload one function like give add() function.

#include <iostream>

using namespace std;
int add(int a,int b);   //return type
float add(float a,float b);
//functions data type can be same like both int or both float but parameters data type must be different from each other
//otherwise it will give error that two time declaration of same function.
int main()
{
    int x,y;
    cout << "Please! Enter the int value of x:";
    cin>>x;
    cout << "Please! Enter the int value of y:";
    cin>>y;
    float a,b;
    cout << "Please! Enter the float value of x:";
    cin>>a;
    cout << "Please! Enter the float value of y:";
    cin>>b;
    cout<<"The int Sum is: "<<add(x,y)<<endl; //we can also directly put x,y,a and b values...
    cout<<"The float Sum is: "<<add(a,b)<<endl;
    return 0;
}

int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
