#include <iostream>

using namespace std;
int add(int,int);
int product(int,int);
int calculate(int*,int*,int(*)(int,int));

int main()
{
    int x,y,z;
    cout << "Passing Function as Argument To another function and two integers through Pointer: " << endl;
    cout<<"Please! Enter The value of X: ";
    cin>>x;
    cout<<"Please! Enter The value of Y: ";
    cin>>y;
    z=calculate(&x,&y,&product);  //here function product or add passed as argument to calculate function through pointer.
                                 //also product function called here. arguments will passed to add and product function
                                //in calculate function a and b which are also argument of calculate function.
                               //we can also remove ampersand sign from product function. we can replace product by add.
                              // we cannot pass both add and product function because function return alway one value.
                             // so calculate will return only one value to main function either add or product.
    cout<<"The result is: "<<z;
    return 0;
}
int calculate(int* a,int* b, int(*ptr)(int,int)) //*ptr pointing a function having two arguments
{
    int temp=(*ptr)(*a,*b);    //add and product function will return any value which will stored in temp variable
                              // this value then calculate function return to main function.
    return temp;
}
int add(int m,int n)
{
    return m+n;
}
int product(int m,int n)
{
    return m*n;
}
