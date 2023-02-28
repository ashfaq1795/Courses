#include <iostream>
using namespace std;

class basic_class
{
    private:
        int x=46000;
    protected:
        string s="I am Ashfaq Ahmad\n";
    public:
        basic_class()
        {
            cout<<"Constructor of basic class has been called\n";
        }
        void print()
        {
            cout<<"This is basic class\n";
        }
};

class child_class : public basic_class
{
    protected:
           void protected_data()
           {
                cout<<"This is child class.\n";
           }
           string string_return()
           {
                return "protected function can also be called in other class.\n";
           }
    public:
           string w=s;    //we accessed protected data of one class in another class.
           child_class()
           {
                cout<<"constructor of child class has beeen called\n";
           }
};

class child_child_class : public child_class
{
    public:
          child_child_class()
          {
                cout<<"constructor of child-child class has been called\n";
          }
          int z=2000;
          void print1()
          {
            protected_data();   //we accessed protected data of one class in another class.
          }
          void print2()
          {
                cout<<"this is child child class\n";
          }
          string R=string_return();  //protected function can also be called in other class.         
};

int main()
{
    child_child_class ccc;
    ccc.print();
    ccc.print1();
    ccc.print2();
    cout<<ccc.z<<endl;
    cout<<ccc.w;
    cout<<ccc.R;;
    //cout<<ccc.x;             //we can't access private data outside of the class as well as in inheritted class.
}