#include<iostream>
using namespace std;
float chargess(char servicecode , int minutes ,char time);
main()
{
    int minutes;
    char servicecode;
    char time;
    float charges;
    cout<< "enter the number of minutes you used the service :";
    cin>>minutes;
    cout<< "enter which type os customer you are(regular/premium) select (r/p):";
    cin>>servicecode;
    cout<<"enter 'D' for daytime or 'N' for nighttime :";
    cin>>time;
    charges=chargess(servicecode ,minutes ,time);
    cout<< " the charges are :"<<charges << "$" <<endl;


}

float chargess(char servicecode , int minutes , char time)
{
     float premium_price=25.00;
     float regular_price=10.00;
     float reg_overcharges=0.20;
     float prem_day_overcharges=0.10;
     float prem_night_overcharges=0.05;
    float charges;
    if(servicecode=='p') 
    {
        if(time=='d')
        {
            if(minutes<=75)
            {
                
                charges=premium_price;
            }
            else
            {
                charges=premium_price+(minutes*prem_day_overcharges);
            }
        }
        if(time=='n')
        {
            if(minutes<=100)
            {
                charges=premium_price;

            }
            else
            {
                charges=premium_price+(minutes*prem_night_overcharges);
            }
        }
    }
    if(servicecode=='r')
     {
    
            if(minutes<=50)
            {
                charges=regular_price;
            }
            else
            {
                charges=regular_price+(minutes*reg_overcharges);
            }

    
    }
    return charges;
}
