#include <iostream>
using namespace std; 
int main()
{
	int x[3][8]={{2,3,4,3,3,3,3,3},{4,2,1,4,4,4,4,4},{9,7,0,5,5,5,5,5}};
	for(int r=0; r<3; r++)
	{
	    for(int c=0; c<8; c++)
		{
		 cout<<x[r][c]<<" ";	
		}
		cout<<endl;	
	}
	return 0;
}
