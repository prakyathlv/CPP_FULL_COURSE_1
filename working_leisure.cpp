#include<iostream>
using namespace std;
int main()
{
   int hour;
   cout<<"enter the hour: "<<endl;
   cin>>hour;  
   if(hour>=9&&hour<=18)
   cout<<"working hour"<<endl;
   else
   cout<<"leisure hour"<<endl;
   return 0;
    
}
