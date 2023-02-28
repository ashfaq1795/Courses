#include <iostream>
using namespace std;
 class circle
 {
 public:
 float re;
 public:
 float area;
 // circle(float r);
 double calculation();
 void display(); 
 ~circle()
 {
 	cout<<" ashgaf";
	 }	
 };
 //circle::circle(float r):re(r){}
 double circle::calculation()
{
   area= 2*(3.14)*re;	
 }
 void circle::display()
{
	cout<<area;
  } 
  
int main()
 {
 	circle c;
 	cout<<"please enter r";
 	cin>>c.re;
 	c.calculation();
 	c.display();
 	return 0;
 	 }
