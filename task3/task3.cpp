#include<iostream>
using namespace std;
string checkTitle(int age , char gender);
main()
{
   int age ;
   char gender ;
   string titlee;
   cout << " enter your age : " ;
   cin>> age;
   cout<< " enter your gender : " ;
   cin>> gender ;
   titlee=checkTitle(age,gender);
   cout<< " the title of this person is : " << titlee << endl;
   
}
string checkTitle(int age , char gender)
{
   string titlee;
   if(age>=16 && gender=='f')
   {
     titlee ="Mrs.";
   }
   else if(age<16 && gender=='f')
   {
    titlee="Miss";
   }
   else if(age>=16 && gender=='m')
   {
     titlee ="Mr.";
   }
   else if(age<16 && gender=='m')
   {
    titlee="Master";
   }
   else
   {
    titlee="mai nahi btaonga" ;
   }
    return titlee;
}