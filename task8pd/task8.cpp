#include<iostream>

using namespace std;
string positionofpoint(int x , int y , int h);
main()
{
   int x;
   int y;
   int h;
   string result;
   cout<< " enter the x coordinate : " ;
   cin>>x;
   cout<<" enter the y coordinate : ";
   cin>>y;
   cout<<"enter the value of h : " ;
   cin>>h;
   result=positionofpoint(x, y ,h);
   cout<< " the point is : " << result << endl;


}
string positionofpoint(int x , int y , int h)
{
    string result;
    if(h==2)
    {
        if(x<=6 && y>=6)
        {
            result="outside";

        }
        else if (x<=6 && y<=6)
        {
            result="inside";

        }
        else 
        {
            result="border";

        }
        
 }
 return result;
}