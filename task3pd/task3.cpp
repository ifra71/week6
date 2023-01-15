#include<iostream>
using namespace std;
string zodiac(int date , string month);
main()
{
    int date;
    string month;
    string star;
    cout<< " enter the date of the month : ";
    cin>>date;
    cout<< " enter the month : ";
    cin>>month;
    star= zodiac(date,month);
    cout<< " the zodiac is  : " << star << endl;

}
string zodiac(int date , string month)

{
    string star;
    if((month=="march" && date>=21) || (month=="april" && date<=19))
    {
        star="aries";
    }
 if((month=="april" && date>=20) || (month=="may" && date<=20))
    {
        star="taurus";
    
    }
     if((month=="may" && date>=21) || (month=="june" && date<=20))
    {
        star="gemini";
        
    }
     if((month=="june" && date>=21) || (month=="july" && date<=22))
    {
        star="cancer";
    
    }
      if((month=="july" && date>=23) || (month=="august" && date<=22))
    {
        star="leo";
    
    }
      if((month=="august" && date>=23) || (month=="september" && date<=22))
    {
        star="virgo";
    
    }
      if((month=="september " && date>=23) || (month=="october" && date<=22))
    {
        star="libra";
    
    }
      if((month=="october" && date>=23) || (month=="november" && date<=21))
    {
        star="scorpio";
    
    }
  if((month=="november" && date>=22) || (month=="december" && date<=21))
    {
        star="saggitarius";
    
    }
      if((month=="december" && date>=22) || (month=="january" && date<=19))
    {
        star="capricorn";
    
    }
      if((month=="january" && date>=20) || (month=="feb" && date<=18))
    {
        star="aquarius";
    
    }
      if((month=="feb" && date>=19) || (month=="march" && date<=20))
    {
        star="pieces";
    
    }
    return star;
}