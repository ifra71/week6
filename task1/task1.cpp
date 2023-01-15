#include<iostream>
using namespace std;
char calcGrade(int marks);
main()
{
   int marks;
   char Grade;
   char result;
   cout<< " enter marks : " ;
   cin>>marks;
   result= calcGrade(marks);
   cout<< " the grade is "<< result << endl;

}
char calcGrade(int marks)
{
    char result;
    if(marks<50)
    {
       result ='F';
    }
    else if(marks>=50 && marks<=60)
    {
        result='E';
    }
    else if(marks>=61 && marks<=70)
    {
        result='D';

    }
    else if(marks>=71 && marks<=80)
    {
      result='C';
    } 
    else if(marks>=81 && marks<=85)
    {
        result='B';
    }
    else
    {
        result ='A';
    }
     return result;
}

