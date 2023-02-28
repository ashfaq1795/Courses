//if one or more objects of one structure is used as members for another structure such phenomena is
//known as Nested structure.
//how to input data in nested object and then display as shown below.


#include <iostream>
using namespace std;

struct info
{
                                            //members of structure "info".
    string city_name,Area_type;
    int city_no;
};
struct data
{
                                         //members of structure "data". some are object of structure "info".
    info s[3];                          //3 objects of info.

    //we can also crate these three objects in given form but in given case data will be hard coded or will be given
    //from user in individual form i,e cin will be written for each object individually. for loop will not used.
    //info s1;
    //info s2;
    //info s3;


    int temperatur[3];
    int population[3];
};

int main()
{
    data d;                                       //object of structure data.
    cout<<"Please! Enter cities information and Data\n";
    for(int i=0; i<3; i++)
    {
        cout<<i+1<<")City name: ";
        cin>>d.s[i].city_name;                      //nested members will be taken in this form.
        cout<<"  Area Type: ";
        cin>>d.s[i].Area_type;
        cout<<"  City no: ";
        cin>>d.s[i].city_no;
        cout<<"  Temperature: ";                   //temp and popul are not nested members so taken in normal form.
        cin>>d.temperatur[i];
        cout<<"  population: ";
        cin>>d.population[i];
    }
    cout<<"Now cities information and Data are:\n";
    for(int i=0; i<3; i++)
    {
        cout<<i+1<<")City name: "<<d.s[i].city_name<<endl;
        cout<<"  Area Type: "<<d.s[i].Area_type<<endl;
        cout<<"  City no: "<<d.s[i].city_no<<endl;
        cout<<"  Temperature: "<<d.temperatur[i]<<endl;
        cout<<"  population: "<<d.population[i]<<endl;
    }

    return 0;
}
