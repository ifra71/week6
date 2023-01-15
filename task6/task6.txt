#include<iostream>
using namespace std;
float checkcost(string city , string product , int quantity);
main()
{
    int quantity;
    string city;
    string product;
    float cost;
    cout<< " enter your city name : ";
    cin>> city;
    cout<< " enter the product : ";
    cin>>product;
    cout<< " enter the quantity : " ;
    cin>>quantity;
    cost=checkcost(city ,product ,quantity);
    cout<< " cost is " <<cost <<endl;
}
float checkcost(string city , string product , int quantity)
{
    float cost;
   if(city=="sofia" && product=="coffee")
   {
    cost=0.50*quantity;

   }
if(city=="sofia" && product=="water")
   {
    cost=0.80*quantity;
    
   }
if(city=="sofia" && product=="beer")
   {
    cost=1.20*quantity;
    
   }
if(city=="sofia" && product=="sweets")
   {
    cost=1.45*quantity;
    
   }
if(city=="sofia" && product=="peanuts")
   {
    cost=1.60*quantity;
    
   }

if(city=="plovdiv")
{
    if(product=="coffee")
    cost=0.40*quantity;
    if(product=="water")
    cost=0.70*quantity;
    if(product=="beer")
    cost=1.15*quantity;
    if(product=="sweets")
    cost=1.30*quantity;
    if(product=="peanuts")
    cost=1.50*quantity;
}
if(city=="varna")
{
    if(product=="coffee")
    cost=0.45*quantity;
    if(product=="water")
    cost=0.70*quantity;
    if(product=="beer")
    cost=1.10*quantity;
    if(product=="sweets")
    cost=1.35*quantity;
    if(product=="peanuts")
    cost=1.55*quantity;

}
return cost;
}