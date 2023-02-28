//function can be defined outside the class using scope resolution operator (::).
//scope resolution specify to which class given function relate.
#include <iostream>
using namespace std;
class sum
{
   private:
   double num1,num2;
   public:        //here no constructor defined so default constructor is no argument constructor.
   double input();
  double add() ;
  void display();
};
//defining function outside the class.
double sum::input()
{
    cout<<"please enter num1: ";
    cin>>num1;
     cout<<"please enter num2: ";
    cin>>num2;
}
double sum::add()
{
    return num1+num2;
}
void sum::display()
{
    cout<<"sum is: "<<add();
}
int main()
{
    sum s;
    s.input();
    s.add();
    s.display();
}
