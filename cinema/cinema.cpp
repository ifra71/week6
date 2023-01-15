#include<iostream>
using namespace std;
float totalincome(string type  , int rows , int columns);
main()
{
    int rows;
    int columns;
    string type;
    float income;
    cout<< " enter number of rows : ";
    cin>> rows;
    cout << " enter number of columns : ";
    cin>> columns ;
    cout<< " enter type of screen (premiure, normal , discount) : " ;
    cin>> type;
    income=totalincome(type,rows,columns);
    cout<< " total amount is : " << income << endl;
}
float totalincome(string type  , int rows , int columns)
{
    float price;
    float income;
    if(type=="premiure")
    {
        price=12.0;
        income=(rows*columns)*price;
        
    }
    else if(type=="normal")
    {
        price=7.50;
        income=(rows*columns)*price;
        
    }
    else if(type=="ordinary")
    {
        price=5.00;
        income=(rows*columns)*price;
        
    }
    else
    {

        cout<< " not enough money";
    }
    return income;
}