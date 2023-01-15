#include<iostream>
using namespace std;
string activity(string temperature , string humidity);
main()
{
    string temperature;
    string humidity;
    string result;
    cout<< " temperature is :";
    cin>>temperature;
    cout<< "humidity is : ";
    cin>>humidity;
    result=activity(temperature,humidity);
    cout<< " you should"<<result<<endl;
    
}
string activity(string temperature ,string humidity)
{

     string result;
     if(temperature=="warm")
    {
      if(humidity=="dry")
      {
        result="play tennis";
      }
      if(humidity=="humid")
      {
        result="swim";
      }
    }
    if(temperature=="cold")
    {
      if(humidity=="dry")
      {
        result="play basketball";
      }
      if(humidity=="humid")
      {
        result="watch tv";
      }
    }
     return result;
}