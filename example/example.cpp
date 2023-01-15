#include<iostream>
using namespace std;
main()
{
    int price ;
    string brandname;
    cout<< "enter price ";
    cin>> price;
    cout << " enter brand name :";
    cin>>brandname;
    if(price<=1500 )
    {
       if (brandname=="outfitters")
       {
        cout << " buy this " << endl;
       }

    }
    else
    {
        cout << " you shouldnt buy this " << endl;
    }

}