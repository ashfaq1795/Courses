//in this we print array fixed elements, accessing single element of array, and we can also edit array element given below.
#include<iostream>
using namespace std;
int main()
{
 int x[10]={2,3,4,5,6,7,8,9,10,11};	 //array initialization.
 int sum=0;
 for(int i=0; i<10; i++)            //for loop for displaying array elements
 {
 	cout<<"x["<<i<<"]="<<x[i];
 	cout<<endl;
 	sum=sum+x[i]; //or sum+=x[i]  //for summing all elements in a single loop or we can also create another loop for summation.
 }
 cout<<endl;
 cout<<"sum of array elements= "<<sum;

 cout<<endl;
 cout<<"Accessing the individual element at index no 4.\n";
 cout<<"x["<<4<<"]="<<x[4];          //accessing individual value of array
 cout<<endl;
 x[4]=66;                           //assigning new value to array or edit array elements.
 cout<<"After modification of array element 6 changed to 66.\n";
 cout<<"x["<<4<<"]="<<x[4];
 cout<<endl;

 return 0;
}
