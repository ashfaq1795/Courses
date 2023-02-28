#include <iostream>
using namespace std;

class base1
{
    protected:
    int x=200;           //private data
    public:
    void firstbase()
    {
        cout<<"This is First base class\n";
    }
};

class base2
{
    protected:
    string protectedfunction()             //private data.
    {
        return "This is Protected function of base class 2\n";
    }
    public:
    void secondbase()
    {
        cout<<"This is Second base class\n";
    }
};

class inheritedclass : public base1 , public base2
{
   public:
         void childclass()
         {
            cout<<"This is child class of two base classes\n";
         }
         int z=x;    //accessed protected veriable.
         string s=protectedfunction();  //accessed protected function.

};

int main()
{
    inheritedclass myobj;
    myobj.firstbase();
    myobj.secondbase();
    cout<<myobj.z<<endl;
    cout<<myobj.s;
}