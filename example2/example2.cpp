#include<iostream>
using namespace std;
int isGreatest(int num1 , int num2 , int num3);
main()
{
   int num1;
   int num2;
   int num3;
   int isGreatest;
   int result;
   cout <<  " enter first number : ";
   cin>> num1;
   cout << " enter second number : ";
   cin>> num2;
   cout << " enter third number   : " ;
   cin>> num3;
  result=isGreatest(num1,num2,num3)
  cout<< " the greatest one is: " << result<<endl;

}
int isGreatest(int num1 , num2 , num3)
{
    int result , n1 , n2 , n3  ;
  if(n1>n2 && n1>n3)
  {
    result= n1;
  }
  if (n2>n1 && n2>n3)
  {
    result= n2;
  }
  if (n3>n1 && n3>n2)
  {
    result= n3;
  }
  return result;

}