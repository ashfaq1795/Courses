//linear search.
#include<iostream>
using namespace std;
int main()
{
 int z;
 int arr[5];
 cout<<"enter array elements...\n";
 for (int i=0; i<5; i++)
 {
     cout<<"array["<<i<<"]=";
 	 cin>>arr[i];
	 }
	 cout<<"\nenter the element you want to search: ";
	 cin>>z;
	 for (int i=0; i<5; i++)
	 {
	  if(arr[i]==z)
	    {
		 cout<<"the element you entered is present in array and index no of "<<z<<" is"<< " arr["<<i<<"]";
	    }
	    //here we cannot write else statement b/c it will print 5 time. so no need to write it.
      }

	    return 0;
 }
