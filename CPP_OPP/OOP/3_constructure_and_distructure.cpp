//constructor special member function called implicitly when object create.
//used for initialization of data members, acquisition of resources and opening files.
//destructor also special member function called implicitly when object terminated.
//constructor and destructor have same name as class name but destructor started with ~.
//further see slides.
#include <iostream>

using namespace std;

 class constructor
 {
 private:
    int x,y;
 public:
    constructor()  //constructor.
    {
        cout<<"it call automatically when object creat:\n";
    }
    ~constructor()
    {
        cout<<"Automatically called when object terminated:\n";
    }
 };
int main()
{
    constructor x;  //x object
    cout << "Hello I am Ashfaq Ahmad" << endl;
    return 0;
}
