#include <iostream>
#include <cmath>
using namespace std;

void roots(int a,int b,int c)
{
   float d=0,rot1=0,rot2=0;
   if(a==0)
   {
       exit(0);
   }
   d=(b*b)-(4*a*c);
   if(d>0)
   {
       rot1=(-b+sqrt(d))/(2*a);
       rot2=(-b-sqrt(d))/(2*a);
       cout<<"The Roots are Real and Distinct.\n";
       cout<<"The Roots are: "<<rot1<<" , "<<rot2;
   }
   else if(d<0)
   {
       rot1=-b/(2*a);
       rot2=sqrt(-d)/(2*a);
       cout<<"The Roots are Imaginary.\n";
       cout<<"The Roots are: "<<rot1<<" , "<<rot2;
   }
   else
   {
       rot1=(-b)/(2*a);
       rot2=rot1;
       cout<<"The Roots are Real and Equal.\n";
       cout<<"The Roots are: "<<rot1<<" , "<<rot2;
   }
}

int main()
{
    int x,y,z;
    cout << "Hello world!" << endl;
    cout<<"Please! Enter The Coefficients a , b and c of Quadratic Equation.\n";
    cout<<"a(a!=0): ";
    cin>>x;
    cout<<"b: ";
    cin>>y;
    cout<<"c: ";
    cin>>z;
    cout<<"The Quadratic Equation is : "<<x<<"x^2+"<<y<<"x+"<<z<<endl;
    roots(x,y,z);
    return 0;
}
