//structure is collection of data of different data types.
//it treat different data types as a  single group.
//after declaring structure we can use structure name as a data type as "student" in this case.
//we can access data of the structure individually using dot operator.
#include <iostream>

using namespace std;
struct student   //student is a structure because struct keyword is used before it.
{
                //structure "student" consist of two data of different data types.
    string name;
    int id,setno;
};
int main()
{
    student p1; //p1 is the object of structure student. it will contain all data present in student.


    //first method of input: Direct method
    p1={"Ashfaq Ahmad",1795,677}; //here sequence must matter.
    //cout<<p1;             we cannot print p1 it will give us error.
    cout << "The Student name is: " << p1.name<<endl;  //we can access data of the structure individually using dot operator.
    cout << "The Student ID is: " << p1.id<<endl;
    cout << "The Student set no is: " << p1.setno<<endl;



      //2nd method of input: indirect method
      p1.name="Rehan khan";
      p1.id=344444;
      cout << "The Student name is: " << p1.name<<endl;
      cout << "The Student ID is: " << p1.id<<endl;
    return 0;
}
