//double pointer concept see in register diagramatically.
#include <iostream>

using namespace std;

int main()
{
    int x=8;
    int* p1;   // in case of pointer to pointer we cannot use void as a data type for pointer.
    int** p2;  //double pointer...
    p1=&x;
    p2=&p1;

    cout<<"&x: "<<&x<<endl;
    cout<<"p1: "<<p1<<endl; //it will give address of x.
    cout<<"*p1: "<<*p1<<endl; //it will give value of x.
    cout<<"&p1: "<<&p1<<endl;
    cout<<"p2: "<<p2<<endl;  //it will give address of p1.
    cout<<"*p2: "<<*p2<<endl; //it will give value stored in p1 which is address of x.
    cout<<"**p2: "<<**p2<<endl; //first dereferencing of p2 give address of x and again dereferencing of p2 give value of x.
    return 0;
}
