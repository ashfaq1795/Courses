#include <iostream >
using namespace std;
class result
{
	private:
		int per,*avr;
		public:
			result(int p,int a): per(p),avr(a){}
			result(const result &r)
			{
				per=r.per;
				avr=new int;
				*avr=*(r.avr);
			}
			~result()
			{
				delete [] avr;
			}
			void display()
			{
				cout<<"per: "<<per<<endl;
				cout<<"avr: "<<avr<<endl;
				cout<<"address of avr: "<<&avr<<endl;
			}
};
int main()
{
	result r1(55,45);
	r1.display();
	return 0;
}
