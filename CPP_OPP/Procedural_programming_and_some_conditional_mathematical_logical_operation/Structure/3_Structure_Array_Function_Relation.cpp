//Function,array and Structure Relationship
//passing structure as parameter of function.

#include <iostream>
using namespace std;

struct Ashfaq_result                                      //structure
{
   //members of structure "Ashfaq_result".
   char subject[50];
   int marks;
};
int print(Ashfaq_result);                               //function declaration.

int main()
{
    Ashfaq_result x[4];                                 //four object of structure "Ashfaq_result".
    cout<<"Please! Enter Subjects name and marks\n";
    for (int i=0; i<4; i++)
    {
        cout<<"Subject Name: ";
        cin>>x[i].subject;
        cout<<"Marks: ";
        cin>>x[i].marks;
    }
    cout<<"*********Transcript*********\n";
    int z,total=0;
    for(int i=0; i<4; i++)
    {
        z=print(x[i]);                                   //passing object of data type "Ashfaq_result" to function "print".
        total+=z;
    }
    cout<<"The Total marks is: "<<300<<endl;
    cout<<"The Total obtained marks is: "<<total<<endl;
}
int print(Ashfaq_result z)                                      //function definition
{
    cout<<"The Subject Name is: "<<z.subject<<endl;
    cout<<"Marks is: "<<z.marks<<endl;
    return z.marks;
}
