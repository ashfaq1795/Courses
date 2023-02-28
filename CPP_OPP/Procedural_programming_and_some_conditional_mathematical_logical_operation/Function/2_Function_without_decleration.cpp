//function without declaration.
#include <iostream>
using namespace std;
void myfunction()   //function definition without declaration.
//without declaration function definition alway before main function otherwise it will give error.
{
    cout<<"Hellow Ashfaq! Asslam-o-alikom\n";
}

int main()
{
    cout << "Hello world!" << endl;
    myfunction();  //function call
    return 0;
}
//if we define function here without declaration it will give error.
