#include<iostream>
#include<cmath>
using namespace std;
float playsvolleyball(string year, int holidays , int weekends);

main()
{
  string year;
  int holidays;
  int weekends;
  int res;
  float result;
  cout<< " enter the year(leap/normal)";
  cin>>year;
  cout<<"enter the holidays";
  cin>>holidays;
  cout<<" enter the weekends:";
  cin>>weekends;
  res=playsvolleyball(year,holidays ,weekends);
  cout<< " valdimar plays "<< res << "days";
  
}
float playsvolleyball(string year, int holidays , int weekends)
{
    float holidaystt;
    float weekendss;
    float weekendsofia;
    float weekendsofiaa;
    float res;
    float perc;
    float result;

    holidaystt=(2.0/3.0)*holidays;
    weekendss=7*weekends;
    weekendss=weekendss-holidaystt;
    weekendsofia=48-weekends;
    weekendsofiaa=(3.0/4.0)*weekendsofia;
    
    if(year=="leap")
    {
        result=weekendsofiaa+weekends+holidaystt;
        perc=(result*15)/100;
        res=result+perc;
    }
      else
      {
        result=weekendsofiaa+weekends+holidaystt;
        res=result;
      }
      return res;
}