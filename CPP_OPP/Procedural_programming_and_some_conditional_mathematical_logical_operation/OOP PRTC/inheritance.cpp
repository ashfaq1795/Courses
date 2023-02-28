#include <iostream>
using namespace std;
class A{
private:
 int num1;
protected:
 int num2;
public:
 int num3;
 A(){
 num1 = 1;
 num2 = 2;
 num3 = 3;
 }
 void display(){
 cout << "Number 1: " << num1 << endl;
 cout << "Number 2: " << num2 << endl;
 cout << "Number 3: " << num3 << endl;
 }
};
class B: public A{
private:
 int num4; 
public:
 B(){
 num4 = 4;
 }
 void display(){
 //cout << "Number 1: " << num1 << endl; // error: can't access private data
 cout << "Number 2: " << num2 << endl; // protected data member of A
 cout << "Number 3: " << num3 << endl; // public data member of A
 cout << "Number 4: " << num4 << endl; // private data member of B
 }
};
int main(){
 B obj;
 obj.display();
 cout << "\nUpdating public data member of A using B's object..." << endl;
 cout << "\n\nCalling B's display() function: " << endl;
 obj.num3 = 5;
 obj.display();
 //obj.num2=10;  // because protected
 //obj.display();
return 0;
} 
