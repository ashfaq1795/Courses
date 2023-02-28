#include <iostream >
using namespace std;
int main()
{
    int arr[6][4];
    cout<<"please enter the array elements...\n";
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<4; j++)
		{
        cout<<"array["<<i+1<<j+1<<"]=";
		cin>>arr[i][j];
       	}
   }
		for(int i=0; i<6; i++)
    	{
		for(int j=0; j<4; j++)
		{
		cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}

}
