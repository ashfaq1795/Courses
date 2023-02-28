//we can make many constructors having same names but different perameters this is called constructor overloading....
#include <iostream>
using namespace std;
 class ashfaq
 {
  private:
  int age;
  string despline ;
  public:
  ashfaq();
  ashfaq(string a);
  ashfaq(int old);
  ashfaq(int old, string a);
  void display()
  {
  	cout<<endl<<age<<endl<<despline<<endl<<endl;
  }
	  
};
ashfaq::ashfaq()
{
	age=0;
	despline="no name";
	cout<<"default constructor....";
}
ashfaq::ashfaq(string a)
{
	age=0;              //cnge
	despline=a;
	cout<<"one argument constructor....";

}
ashfaq::ashfaq(int old)
{
	age=old;
	despline="no name";
	cout<<"one argument constructor....";
}
ashfaq::ashfaq(int old, string a )
{
	age=old;
	despline=a;
	cout<<"two argument constructor....";

}
   	
int main()
{
 ashfaq w;
 w.display();
 ashfaq x("Engineer");
 x.display();
 ashfaq y(20);
 y.display();
 ashfaq z(19,"Engineer");
 z.display();
 return 0;
 
}
