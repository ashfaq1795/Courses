#include <iostream>

using namespace std;

int main()
{
    //ist syntax of string.
    char s[13]={'A','S','H','F','A','Q',' ','A','H','M','A','D','\0'}; //this is called string.it is array of char type.
    //hard code string.
    //here size is fixed.
    //we gave size 13. in our mind it start from 1 to 13. but in processor it start from 0 to 12.
    //in this type of syntax null character is necessary.
    //if we do not put null character at the end then it will print some thing else after string.
    cout<<s<<endl;

     //2nd syntax of string.
     char z[]="ASHFAQ AHMAD UET Peshawar"; //it is array of char type. so it is called string.
     //here size is not fixed.(unlimited size)
     //but we can also fix size here like above s[13].then size will matter .
     //it is also hard coding but just like string syntax.
     //here no need of null character.
     //here compiler take null character by self.
    cout<<z<<endl;

    //3rd syntax of string...
    string x;
    x="Asslamoalikom! How are you?";//it is array of char type. so it is called string.
     //here size is not fixed.(unlimited size)
     //here we can increase no of strings not char using for loop i,e string x[5]. it will print five name not 5 characters .
     //it is also hard coding but just like string syntax.
     //here no need of null character.
     //here compiler take null character by self.
    cout<<x<<endl;

    return 0;
}
