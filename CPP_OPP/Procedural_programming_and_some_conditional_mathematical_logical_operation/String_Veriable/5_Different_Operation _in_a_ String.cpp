//Different operation.
#include <iostream>
#include <string.h> //this library for different operation with string like strcpy, strcmp,strcat.
//while #include<string> is used only for string input output program.This library is also no need to use in program.
using namespace std;

int main()
{
    //1) Assignment operation.
    char s1[13]={'A','S','H','F','A','Q',' ','A','H','M','A','D','\0'};
//    s1={'N','A','Z','I','M'};           //wrong Assignment.
//    s1="Baber azam";                   //wrong assignment.
//    strcpy(s1,{'N','A','Z','I','M'});  //wrong Assignment.
    strcpy(s1,"Babar Azam pakistani cricketer ");  //correct Assignment.
    //here size again become unlimited.
    //for strcpy , <string.h> library is required.
    cout<<"Assignment Operation..........\n";
    cout<<s1<<endl;

    char s2[]="ASHFAQ AHMAD UET Peshawar";
    cout<<s2<<endl;


    //2 Comparison operation.
    //int a=s2>s1;           //Correct Comparison.
    int a=strcmp(s2,s1); //correct comparison. both syntax are correct.
    //Note: the value of a will be either 1 or 0 if 1 its mean condition correct if 0 its mean condition false.
    //we can also cout the value of a.
    cout<<"\nComparison Operation..........\n";
    if (a==1)
    {
    cout<<"Correct! the string s2 is greater than s1.\n";
    }
    else
    cout<<"Wrong! the String s2 is not greater than s1.\n";


    //3) Adding two strings to single string.
    char s3[100];
//  s3=s1+s2;    //wrong Addition.
    strcpy(s3,strcat(s1,s2));
    cout<<"\nAdding two strings Operation..........\n";
    cout<<s3;
    return 0;

}
