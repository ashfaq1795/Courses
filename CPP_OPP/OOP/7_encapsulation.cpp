/*The meaning of Encapsulation, is to make sure that "sensitive" data is hidden 
from users. To achieve this, you must declare class variables/attributes 
as private (cannot be accessed from outside the class). If you want others to 
read or modify the value of a private member, you can provide public get and set methods.*/

#include <iostream>
using namespace std;

class encap
{
   private:
   int a;    //encapsulation mean secure your attributes.
   public:
   void setval(int w)
   {
    a=w;
   }
   int getval()
   {
    return a;
   }
};

int main()
{
  encap zz;
  zz.setval(200);
  cout<<"The value of a is: "<<zz.getval();

  return 0;
}