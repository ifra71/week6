#include<iostream>
using namespace std ;
float apartment(string month , int stays);
float studio(string month , int stays);

main()
{
    string month;
    int stays;
    float result;

    cout<< " enter the month (may/june/october/july/august/september):";
    cin>>month;
    cout<< " enter the number of days you want to stay(0-200):";
    cin>>stays;

     result=studio(month ,stays);
    cout<< " for studio :" <<result<<"$"<<endl;

    result=apartment(month ,stays);
    cout<< "for apartment : "<<result<< "$"<<endl;

}
float studio(string month , int stays)
{   
    float dollars;
    float afterdisc;
    float total;
    float result;
    if(month=="may"|| month=="october")
    {
        if(stays>14)
        {
            dollars=50;
            total=stays*dollars;
            afterdisc=(total*30)/100;
            
            result=total-afterdisc;

            
        }
        else
        {
            dollars=50;
            total=stays*dollars;
            result=total;
        }
    }
        if(month=="june" || month=="september" )
        {
            if(stays>14)
            {
            dollars=75.20;
            total=stays*dollars;
            afterdisc=(total*20)/100;
            result=total-afterdisc;
            }
        
        else
        {
            dollars=75.20;
          total=stays*dollars;
          result=total;
        }
        }
        if(month=="july" || month=="august")
        {
            dollars=76;
            total=stays*dollars;
            result=total;
        }
    
    return result;
}
float apartment(string month , int stays)
{
     float dollars;
    float afterdisc;
    float total;
    float result;
    if(month=="may"|| month=="october")
    {
         if(stays>14)
         {
            dollars=65;
            total=stays*dollars;
            afterdisc=(total*10)/100;
            result=total-afterdisc;

         }
         else
         {
            dollars=65;
            total=stays*dollars;
            result=total;
         }
    }
         if(month=="june" || month=="september" )
         {
            
         if(stays>14)
         {
            dollars=68.75;
            total=stays*dollars;
            afterdisc=(total*10)/100;
            result=total-afterdisc;

         }
         else
         {
            dollars=68.75;
            total=stays*dollars;
            result=total;
         }
         }
         if(month=="july" || month=="august")
         {
            if(stays>14)
         {
            dollars=77;
            total=stays*dollars;
            afterdisc=(total*10)/100;
            result=total-afterdisc;

         }
         else
         {
            dollars=77;
            total=stays*dollars;
            result=total;
         }
         }
         return result;

 }