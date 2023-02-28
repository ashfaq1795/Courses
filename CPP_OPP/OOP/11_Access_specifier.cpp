#include <iostream>
using namespace std;

class base
{
    protected:
    int x;
};

class child : public base
{
    public:
    void setval(int a)
    {
        x=a;
    }
    int getval()
    {
        return x;
    }

};

int main()
{
    child obj;
    obj.setval(54543);
    cout<<obj.getval();

    return 0;
}