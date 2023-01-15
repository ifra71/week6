#include<iostream>
using namespace std;
main()
{
    int noofppl;
    float budget;
    string type;
    float amountneeded;
    cout<< " enter the number of people in the group : " ;
    cin>> noofppl;
    cout<< " enter the budget : " ;
    cin>>budget;
    cout<< " enter the ticket category(VIP/NORMAL): ";
    cin>>type;
    float remainamount;
    float amountleft;
    float percentamount;
    float cost;
    if(type=="VIP" )
    {
     if(noofppl<=4)
     {
        percentamount=(budget*75)/100;
        remainamount=budget-percentamount;
        cost=499.99*noofppl;
         
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }
        

     }
     else if(noofppl==5 || noofppl<=9)
     {
        percentamount=(budget*60)/100;
        remainamount=budget-percentamount;
        cost=499.99*noofppl;
    
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }
     }
       else if(noofppl==10 || noofppl<=24)
     {
        percentamount=(budget*50)/100;
        remainamount=budget-percentamount;
        cost=499.99*noofppl;
        
         
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }
     }
     else if(noofppl==25 || noofppl<=49)
     {
        percentamount=(budget*40)/100;
        remainamount=budget-percentamount;
        cost=499.99*noofppl;
         
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }
     }
     else if(noofppl>=50)
     {
        percentamount=(budget*25)/100;
        remainamount=budget-percentamount;
        cost=499.99*noofppl;
         
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }
     }
    }
    if(type=="NORMAL" )
    {
     if(noofppl<=4)
     {
        percentamount=(budget*75)/100;
        remainamount=budget-percentamount;
        cost=249.99*noofppl;
         
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }

     }
     else if(noofppl==5 || noofppl<=9)
     {
        percentamount=(budget*60)/100;
        remainamount=budget-percentamount;
        cost=249.99*noofppl;
         amountleft=remainamount-cost;
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }

     }
else if(noofppl==10 || noofppl<=24)
     {
        percentamount=(budget*50)/100;
        remainamount=budget-percentamount;
        cost=249.99*noofppl;
         amountleft=remainamount-cost;
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }

     }
     else if(noofppl==25 || noofppl<=49)
     {
        percentamount=(budget*40)/100;
        remainamount=budget-percentamount;
        cost=249.99*noofppl;
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }

     }
     else if(noofppl>=50)
     {
        percentamount=(budget*25)/100;
        remainamount=budget-percentamount;
        cost=249.99*noofppl;
        
       if (cost<remainamount )
        {
            amountleft=remainamount-cost;
            cout<< " yes you have " << amountleft << "left" << endl;
        }
         else
         {
            amountneeded=cost-remainamount;
            cout<<"Not enough Money ! you need " << amountneeded <<endl;
         }
     }
    }

}