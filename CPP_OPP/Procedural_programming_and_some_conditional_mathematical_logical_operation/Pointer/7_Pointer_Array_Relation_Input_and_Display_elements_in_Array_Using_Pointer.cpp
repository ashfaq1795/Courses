//in this program there are different methods to input and output the elements of array using pointer.
#include <iostream>

using namespace std;

int main()
{
    int arr[7];
    int* p=arr; //pointing first element by default

    cout<<"Please! Enter the Array Elements: \n";
    for(int i=0; i<7; i++)
    {
       cout<<"arr["<<i<<"]=";
       cin>>*p;
       //or p++;
       //or p=&arr[i+1];
        p=arr+(i+1);
       //or cin>>*(p+i);
    }


    p=arr; //now for displaying we must initialize pointer to first element.
    cout<<"Now The Elements of Array Are: \n";
    for (int i=0; i<7; i++)
    {
        cout<<*p<<endl;
        p=&arr[i+1];
       //or p=arr+(i+1);
       //or p++
       //or cout>>*(p+i);
    }
    return 0;
}
