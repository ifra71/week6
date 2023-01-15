#include<iostream>
using namespace std;
string checkspeed(float speed,string title);
main()
{
     int speed;
     string title;
     cout<< " enter speed";
     cin>>speed;
     string titlee;
     titlee=checkspeed(speed,title);
     cout<< " your speed is : " << titlee << endl;

}
string checkspeed(float speed,string title)
{
    string titlee;
    if(speed<=10)
    {
      titlee="slow";
    }
   else if(speed>10 && speed<=50)
    {
      titlee="average";
    }
    else if(speed>50 && speed<=150)
    {
      titlee="fast";
    }
    else if(speed>150 && speed<=1000)
    {
      titlee="ultra fast";
    }
    else
    {
        titlee="extremely fast" ;
    }
    return titlee;
}