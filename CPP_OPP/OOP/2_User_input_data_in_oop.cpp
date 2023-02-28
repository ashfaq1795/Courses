#include <iostream>
using namespace std;

class add
{
private:
    int x,y;
public:
    void setval()
    {
        cout<<"Please Enter the value of x: ";
        cin>>x;
        cout<<"Please Enter the value of y: ";
        cin>>y;
    }
    int sum()
    {
        return x+y;
    }
    void display()
    {
        cout<<"Sum is: "<<sum();
    }
};
int main()
{
    add s;
    s.setval();
    s.sum();
    s.display();
    return 0;
}
