//copy constructor... also called default copy constructor.
//in c++ there is defult copy constructor. i,e default mean we don't creat a specific constructor for copying one object into another. 
//actually it occure automaticlly, so in c++ copy constructor is also called default copy constructor.
#include <iostream>
using namespace std;
class add
{
	private:
	int n1,n2;
	public:
		add(): n1(0),n2(0){}		
	/*	add(const add &s)   //it is basically custom copy constructor..
		{
			n1=s.n1;
			n2=s.n2;
	    	cout<<" in custom copy constructor..\n";

		}*/
		void input()
		{
			cout<<"enter n1: ";
			cin>>n1;
			cout<<"entr n2: ";
			cin>>n2;
		}
		int sum() //here we also use void sum then it will not return value then we will use y=n1+n2
		{
		return n1+n2;
		 } 
		void show()
		 {
		 	cout<<"sum of n1 and n2 is: "<<n1+n2;
		 }
};
int main()
{
	add s1,s2;
	s1.input();
	s1.sum();
	s1.show();
	s2=s1;       //using assignment operator. (copied s1 to s2 by default as we donot created any specific constructor in class for copying)
	cout<<endl;
	s2.show();
	return 0;
}
