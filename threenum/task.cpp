#include<iostream>
using namespace std;
bool greaterno(int num1 , int num2 , int num3);
main()
{
    int num1;
    int num2;
    int num3;
    char great;
    cout<< " enter the first number : ";
    cin>>num1;
    cout<< " enter the second number : ";
    cin>>num2;
    cout<< " enter the third number : ";
    cin>>num3;
    great=greaterno(num1, num2,num3);
    cout << great << endl;
}
bool greaterno(int num1 , int num2 , int num3)
{
    char great;
    if(num1==num2 && num1==num3)
    {
    great='y';
    }
    else
    {
        great='n';
    }
    return great;
}