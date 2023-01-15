#include<iostream>
using namespace std;
float cheapest(string time,int kms);
main()
{
    string time ;
    int kms;
    float cost;
    float cheap;
    string transport;
    cout<< " enter the period of the day : " ;
    cin>> time;
    cout<< " enter the number of kilometers : ";
    cin>>kms;
  
    cost=cheapest(time,kms);
    cout<< " cost is :  " << cost << endl;

}
float cheapest(string time,int kms)
   {
    float cost;
    float taxirate;
    
      if (time=="day")
      {
        taxirate=0.79;
      }
      else
      {
        taxirate=0.90;
      }
      if(kms<20)
      {
        cost=kms*0.79;
        cost=cost+0.70;
      }
    else if(kms<100)
     {
      cost=kms*0.09;  
     }
     else{
      cost=kms*0.06;
     }
      return cost;
   }