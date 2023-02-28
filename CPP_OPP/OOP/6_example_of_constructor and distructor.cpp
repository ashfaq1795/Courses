//constructor is always called automatically but any function other than constructor called manually.


#include <iostream>
using namespace std; 

class student
{
  private:
         string reg_no;
         string name;
  public:
         student(string,string);             //constructor.
         void input(string,string);          //member function.
         void result();                     // member function.
         ~student();
};
student::student(string a,string b)
{
    cout<<"Object has been created\n";
    reg_no=a;
    name=b;
}
void student::result()
{
    //reg_no=="19pwcse1795" && name="Ashfaq"?cout<<"Congratulation You got A grade.\n" : cout<<"you entered invalid info.";
    if(reg_no=="19pwcse1795" && name=="Ashfaq")
    {
        cout<<"Congratulation You got A grade.\n";
    }
    else
     cout<<"you entered invalid info.\n";
}
void student::input(string a,string b)
{
    reg_no=a;
    name=b;
}
student :: ~student()
{
    cout<<"Object has been terminatted: \n";
}
         
int main()
{
    string a,b;
    cout<<"Please Enter Your Registration No: ";
    cin>>a;
    cout<<"Please Enter Your Name: ";
    cin>>b;
    student s("19pwcse1795","Ashfaq");
    s.result();
    s.input(a,b);
    s.result();
    
return 0;
}