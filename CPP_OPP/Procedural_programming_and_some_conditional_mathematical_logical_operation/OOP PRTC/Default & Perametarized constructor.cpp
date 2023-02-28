//Default and perametarized constructor...
#include <iostream>
using namespace std;
class test
{
	private: 
	int x,y;
	public:
		test(): x(0),y(0){}
		test(int a, int b): x(a),y(b){}
	void show()
	{
	    cout<<"x= "<<x<<endl;
    	cout<<"y= "<<y<<endl; 		
	}
};
int main()
{
	test t1,t2(5,7);
	cout<<"Default or perameterless constructor: \n";
	t1.show();
    cout<<"parametarized constructor: \n";
    t2.show();
	
	return 0;
}
