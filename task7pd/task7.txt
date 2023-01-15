#include<iostream>
using namespace std;

main()
{
    int examtime_hrs ;
    int examtime_mins ;
     int arrivaltime_hrs ;
      int arrivaltime_mins;
      cout << " enter the hour the exam will start :";
      cin>>examtime_hrs;
      cout<<"enter the minutes the exam will start : ";
      cin>>examtime_mins;
      cout<<"enter the hour of arrival : ";
      cin>>arrivaltime_hrs;
      cout<< "enter the minutes of arrival : " ;
      cin>>arrivaltime_mins;

    string arrivaltime , final;  
   int total_exam_time=(examtime_hrs*60)+examtime_mins;
   int total_arrival_time=(arrivaltime_hrs*60)+arrivaltime_mins;
   int lessendtime=total_exam_time-total_arrival_time;
   if(lessendtime< -30)
   {
      cout<<"late";
   }
   else if (lessendtime<=30)
   {
    cout<<"on time ";

   }
   else
   {
    cout<<"early";
   }
   if (lessendtime!=0)
     {
       int hrsdfrnce=(lessendtime/60);
       int minsdfrnce=(lessendtime%60);
        if(hrsdfrnce>0)
         {
          cout << hrsdfrnce << ":" << minsdfrnce << endl;
         }
         else {
        cout<< minsdfrnce <<" minutes ";
    }
   if(lessendtime<0)
   {
      cout<<"after the start";
   }
   else{
      cout<< "before the start ";
   }
   }
}