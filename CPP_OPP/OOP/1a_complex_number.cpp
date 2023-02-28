#include <iostream>
using namespace std;

class complex{
   private:
   double re,img;
   public:
   complex();
   ~complex();
   complex(double a,double b);
   void setvalue(double x,double y);
   void show();
};

complex::complex()//: re(0),img(0)   //automatically call
{
    cout<<"object has been created:\n";
}
complex::~complex()              //automatically call
{
    cout<<"Object has been terminated:\n";
}
complex::complex(double a,double b): re(a),img(b){}     //automatically call
void complex::setvalue(double x, double y)
{
    re=x;
    img=y;
}
void complex::show()
{
    if(img<0)
    {
      cout<<"The Complex No is: "<<re<<img<<"i"<<endl;  
    }
    else
    cout<<"The Complex No is: "<<re<<"+"<<img<<"i"<<endl;
}

int main()
{
    complex c1(3,6);
    c1.show();
    c1.setvalue(5,-8);
    c1.show();
    
    return 0;
}
