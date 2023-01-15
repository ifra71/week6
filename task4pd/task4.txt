#include<iostream>
using namespace std;
float cost(string day , string fruit , float quantity);
main()
{
    string fruit;
    string day;
    float costt;
    float quantity;
    cout<< "enter the name of the fruit:";
    cin>>fruit;
    cout<< " enter the quantity of fruit :";
    cin>>quantity;
    cout<< " enter the day of the week :";
    cin>>day;
    costt=cost(day,fruit,quantity);
    cout<< " you have to pay " << costt<< endl;

}
float cost(string day , string fruit , float quantity)
{
    float costt;
  if(day=="sunday"|| day=="saturday")
  {
    if(fruit=="banana")
    {
        costt=quantity*2.70;

    }
    if(fruit=="apple")
    {
        costt=quantity*1.25;
    }
    if(fruit=="orange")
    {
        costt=quantity*0.90;
    }
    if(fruit=="grapefruit")
    {
        costt=quantity*1.60;
    }
    if(fruit=="kiwi")
    {
        costt=quantity*3.00;
    }
    if(fruit=="pineapple")
    {
        costt=quantity*5.60;
    }
    if(fruit=="grapes")
    {
        costt=quantity*4.20;
    }
    return costt;
  }
  else
  {
    if(fruit=="banana")
    {
        costt=quantity*2.50;

    }
    if(fruit=="apple")
    {
        costt=quantity*1.20;
    }
    if(fruit=="orange")
    {
        costt=quantity*0.85;
    }
    if(fruit=="grapefruit")
    {
        costt=quantity*1.45;
    }
    if(fruit=="kiwi")
    {
        costt=quantity*2.70;
    }
    if(fruit=="pineapple")
    {
        costt=quantity*5.50;
    }
    if(fruit=="grapes")
    {
        costt=quantity*3.85;
    }
   return costt; 
  }
}