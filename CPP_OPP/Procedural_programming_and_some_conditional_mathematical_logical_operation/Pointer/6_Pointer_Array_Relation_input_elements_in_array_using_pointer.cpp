//in this Program there are different Method To input elements in array using pointer...
//the 4th method is most popular and holding less memory...
#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int *ptr;
    ptr=arr;  //it by default assign to the first element of array i,e store address of first element by default.
             //in case of array there is no need of ampersand sign.
    *ptr=1; //its mean we assign 1 to the first element of array.
    //There are different way to input elements in array.

    //1)ist method
    ptr++; //now ptr pointing 2nd element of array.
    *ptr=2; //we assign 2 to the 2nd element of array.
           //we can use this method for all five elements.

    //2) 2nd method.
    ptr=arr+2; //Now pointer pointing 3rd element b/c ptr=arr; pointing first element by default.
    *ptr=3;  //we assign 3 to the 3rd element of array.
           //we can use this method for all five elements.

    //3)3rd method.
    ptr=&arr[3]; //Now ptr pointing 4th element.
    *ptr=4;      //we assign 4 to the 4th element of array.
                //we can use this method for all five elements.

    //4)4th Method.
    ptr=arr;     //pointing first element by default.
    *(ptr+4)=5; //we assign 5 to the 5th element of array.
               //we can use this method for all five elements.


    //Now we see These all Method Either correct or Wrong by Displaying all these elements.

    for (int i=0; i<5; i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }


    return 0;
}
