#include <iostream>
using namespace std; 
class polygon
{
	protected:
		int height,length;
		public:
			//polygon(int h,int l): height(h),length(l){}
			void setvalue(int h,int l)
			{
				height=h;
				length=l;
			}
};
class Rectangle: public Polygon
{
double area() 
{
 return (height*length);
 } 
};
class tirangle:public polygon
{
	public:
		void area()
		{
		  z=(length*height)/2;
		}
};
int main()
{
	Rectangle r;
	r.setvlaue(4,5)
	r.area();
	r.show();
	triangle t;
	r.setvalue();
	t.area();
	t.show();
	return 0;
}
