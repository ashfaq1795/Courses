//each element of array will be the object of structure.
//And each element will contain all data of structure.
#include <iostream>
using namespace std;

struct customer
{
    string name;  //members of structure.
    int price;
};
int main()
{
    customer x[5];  //five objects of structure "customer".
    for (int i=0;i<5; i++)
    {
        cout<<"Please! Enter the item name: ";
        cin>>x[i].name;
        cout<<"Please! Enter the item price: ";
        cin>>x[i].price;
    }
    cout<<endl<<endl;
     for (int i=0;i<5; i++)
    {
        cout<<"The item "<<x[i].name<<" has price: "<<x[i].price<<endl;

    }
    return 0;
}
