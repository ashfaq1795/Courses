//accessing single element and modifying chars in string string.
#include <iostream>

using namespace std;

int main()
{
    //first syntax of string.
    char s[13]={'A','S','H','F','A','Q',' ','A','H','M','A','D','\0'}; //this is called string.it is array of char type.
    cout<<s<<endl;
    cout<<"We can also access individual elements of String: \n";
    cout<<"s[0]="<<s[0]<<endl;
    cout<<"s[5]="<<s[5]<<endl;  //we cannot access null character.s[12]
    s[0]='m';
    s[5]='w'; //if we take 'wwww' it will take only one w b/c of 1 byte .size of char
    cout<<"Now the string s after modification.\n";
    cout<<s<<endl<<endl;

    //2nd syntax of string.
    char z[]="ASHFAQ AHMAD UET Peshawar"; //it is array of char type. so it is called string.
    cout<<z<<endl;
    cout<<"We can also access individual elements of String: \n";
    cout<<"z[0]="<<z[0]<<endl;
    cout<<"z[22]="<<z[22]<<endl;  //we cannot access null character.
    z[0]='q';
    z[22]='k';
    cout<<"Now the string z after modification.\n";
    cout<<z<<endl<<endl;


    //3rd syntax of string.
    string x="Uet peshawar edu";
    cout<<x<<endl;
    cout<<"We can also access individual elements of String: \n";
    cout<<"x[0]="<<x[0]<<endl;
    cout<<"x[14]="<<x[14]<<endl;
    x[0]='e';
    x[14]='g';
    cout<<"Now the string x after modification.\n";
    cout<<x<<endl;


    return 0;
}
