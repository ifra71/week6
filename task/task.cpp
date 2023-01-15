#include<iostream>
using namespace std;
float payablee(float amount);
main()
{
   string day;
   string month;
   float result;
   float payable;
   cout << " enter day : ";
   cin>> day;
   cout<< " enter month: " ;
   cin>> month;
   float amount;
   cout<< " enter amount ";
   cin>> amount;
   payable=payablee(amount);
   cout<< " discount is " << payable << endl;

}
float payablee(float amount)
{
    float payable;
   float discount;
   string day,month;
   if(day=="sunday" && (month=="october" || month=="march" || month=="august"))
   {
    discount=(amount*10)/100;
    payable=amount-discount;
    return payable;
   }
   else if(day=="monday" && (month=="november" || month=="dec"))
   {
    discount=(amount*5)/100;
    payable=amount-discount;
    return payable;
   }
   else
   {
    payable=amount;
    return payable;
   }

}