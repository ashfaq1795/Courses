//passing objects as arguments...
#include <iostream>
using namespace std; 
class time
{
	private:
		int h,m;
	public:
		time(): h(0),m(0){}
		time(int a,int b): h(a),m(b){}
		void input();
		int sum(time t1,time t2);
		void display();
};
void time::input()
{
	cout<<"enter hour: ";
	cin>>h;
	cout<<"enter min: ";
	cin>>m;
}
int time::sum(time t1, time t2)
{
	m=t1.m+t2.m;
	h=m/60;
	m=m%60;
	h=h+t1.h+t2.h;
}
void time::display()
{
	cout<<"hour= "<<h<<endl<<"minuts= "<<m;
}

int main()
{
  time t1,t2,t3;
  cout<<"please enter time t1... \n";
  t1.input();
  cout<<"\n\nplease enter time t2...\n";
  t2.input();
  t3.sum(t1,t2);
  cout<<"\n\nsum of t1 and t2 is....\n ";
  t3.display();
  
  return 0;
	
}
