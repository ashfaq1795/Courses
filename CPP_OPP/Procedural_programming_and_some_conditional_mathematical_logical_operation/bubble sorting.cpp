#include<iostream >
using namespace std;
 int main()
 {
    int n;
    cout<<"enter size of array: ";
    cin>>n;
 	int x[n];
 	cout<<"\nenter array elements.... \n";
 	for(int i=0 ; i<n; i++)
	 {
	    cout<<"x["<<i<<"]=";
	 	cin>>x[i];
	  } 
 
 int count=1;
 while( count<n-1)
 {
 	for(int i=0; i<n-count; i++)
 	{
 		if(x[i]>x[i+1])
 		{
 			int temp=x[i];
 			x[i]=x[i+1];
 			x[i+1]=temp;
 			//swap(x[i],x[i+1]);
		 }
	 }
	 count++;
 }
 	cout<<"Array in sorted form...\n";
 for(int i=0; i<n; i++)
 {
    cout<<"x["<<i<<"]="<<x[i];
 	cout<<endl;
 }
 };
