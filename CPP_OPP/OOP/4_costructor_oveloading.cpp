//constructor may have arguments or arguments less.
//if no constructor define in program default constructor is no argument constructor
//more than one constructor possible.
//constructor overloading mean more than one constructor having same names but differents arguments.
#include <iostream>
using namespace std;

class constructor
{
private:
    int x,y;
    char a;
    string s;
public:
    constructor()     //constructor 1 having no arguments
    {
        cout<<"No argument constructor:\n";
    }
    constructor(int a,int b)   //constructor 2 of same name but different arguments (constructor overloading)
    {
        x=a;
        y=b;
        cout<<"x: "<<x<<endl<<"y: "<<y;
    }
    constructor(int x,int y,string z)   //constructor 3 of same name but different arguments (constructor overloading)
    {
        x=x;
        y=y;
        s=z;
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"string: "<<s<<endl;
    }
};
int main()
{
    constructor a;  //no argument constructor will call.
    constructor b(5,7,"Ashfaq Ahmad"); //3 arguments constructor will call
    constructor c(23,55);     //2 arguments constructor will call
    return 0;
}
