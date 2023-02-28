 //selection sort...............
 //we can also sort alphabits by same programming just change char arr[size]. other all are same coding.
 //2nd we can also sort both alphabit and integers in descending order just change  line no 22 by if( arr[j]>arr[i] other all coding will be same.
#include <iostream>
using namespace std;
int main()
{

int arr[8];
cout<<"enter array elements: \n";
for(int i=0; i<8; i++)
{
	cout<<"A"<<i<<"=";
	cin>>arr[i];

}
cout<<endl;
	for(int i=0; i<=6; i++)     //selection will be from first element to n-1
	{
		for( int j=i+1; j<8; j++)  //selected element will be compared with elements from 2nd element to last element.
		{
			if (arr[j]<arr[i])
			{
			int x=arr[j];       //we will store arr[j] first
			arr[j]=arr[i];
			arr[i]= x;
		    }
		}
	}
	for(int i=0; i<8; i++)
	{
		cout<<"A"<<i<<"="<<arr[i];
		cout<<endl;
	}
	return 0;
}
