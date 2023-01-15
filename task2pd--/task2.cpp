#include<iostream>
using namespace std;
main()
{
    float english,maths,chemistry,biology,socialsci;
    string studentname;
    string grade;
    cout<< " enter your name : ";
    cin>>studentname;
    cout<< " enter marks of english ";
    cin>>english;
    cout<< " enter marks of maths ";
    cin>>maths;
    cout<< " enter marks of chemistry ";
    cin>>chemistry;
    cout<< " enter marks of biology ";
    cin>> biology;
    cout<< " enter marks of social sci ";
    cin>>socialsci;
    int totalmarks;
    int obtained;
    float percentage;
    totalmarks=500;
    obtained=english+maths+chemistry+biology+socialsci;
    percentage=(obtained/totalmarks)*100;

    if(percentage>=90 || percentage==100)
    {
        cout<< "A+";

    }
    else if(percentage>=80 || percentage==90)
    {
        cout<<"A";
        
    }
     else if(percentage>=70 || percentage==80)
    {
        cout<<"B+";
        
    }
     else if(percentage>=60 || percentage==70)
    {
        cout<<"B";
        
    }
     else if(percentage>=50 || percentage==60)
    {
        cout<<"C";
        
    }
     else if(percentage>=40 || percentage==50)
    {
        cout<<"D";
        
    }
     else 
     {
        cout<<"F" ;
    
     }
    
}


    