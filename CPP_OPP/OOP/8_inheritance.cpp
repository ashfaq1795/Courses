//in inheritance we can access only public members...

#include <iostream>
using namespace std;

class inherit1
{
    public:
    string s="Ashfaq";
    int age=22;
    void reg()
    {
        cout<<"19pwcse";
    }
};

class inherit2:public inherit1
{
    public:
    string h="Ahmad";
    int year=2022;
    void number()
    {
        cout<<1795;
    }


};

int main()
{
    class inherit2 obj;
    cout<<obj.s<<" "<<obj.h<<endl;
    obj.reg();
    obj.number();

    return 0;

}