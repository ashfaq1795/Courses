//deep copy constructor
//first line same as shallow copy constructor.
#include <iostream >
#include <cstring>
using namespace std;
class student 
{
	private:
		int marks;
		char* name;
		public:
			student(): marks(0),name(" "){}
			student(int m, char n[]): marks(m),name(n){}
			student(const student &s)
			{
			    cout<<"\n\nin deep copy constructor: \n";
				int len=strlen(s.name);
				name=new char[len+1];
				strcpy(name,s.name);
				name=s.name;
				marks=s.marks;
			}
			~student()
			{
				cout<<"\nobject terminated";
			}
			void show()
			{
				cout<<"name: "<<name<<endl;
				cout<<"marks:"<<marks;
				cout<<"\naddress of object: "<<&name;
			}
};
int main()
{
	student t1(90,"Ashfaq ahmad");
	t1.show();
	student t2=t1;
	t2.show();
	
	return 0;
}
