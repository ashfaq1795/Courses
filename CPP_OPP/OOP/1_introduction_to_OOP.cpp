//oop is extended form of structure.
//make program more flexible.
//Class is a collection of data and functions. when a class is defined, it does not occupy any space in the computer
//memory, it only defines the data item and the member function that can be used to work upon its data items.
//class is like a data type.
//The variables or instances of a class are called objects. when variable is declared of any data type memory is
//allocated to variable according to data type. Similarly if object of class is declared memory is allocated to
//object according to class.
//No memory is allocated to class and data type.

#include <iostream>
using namespace std;

class rectangle   //class rectangle
{
    private:     //member access specifier.
        int length,width;  //data members
    public:
        void setval(int a,int b)  //member function
        {
            length=a;
            width=b;
        }
        int area()           //member function
        {
            return length*width;
        }

};
int main()
{
    rectangle r;   //object of class rectangle. we can also take many objects in array form.

    //1) Data hard coded.
    r.setval(5,7);                    //function call
    cout<<"The Area is: "<<r.area()<<endl;  //function call

    //2) user input.
    int x,y;
    cout<<"Enter length: ";
    cin>>x;
    cout<<"Enter width: ";
    cin>>y;
    r.setval(x,y);     //function call
    cout<<"The Area is: "<<r.area()<<endl;  //function call

}
