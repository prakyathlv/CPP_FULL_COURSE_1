#include<iostream>
using namespace std;
int main()
{
   float a,b,c,r1,r2,d;
   cout<<"enter the a b and c"<<endl;
   cin>>a>>b>>c;
   d=b*b-4*a*c;
   cout<<d<<endl;
   if(d=0)
   cout<<"roots are real and equal"<<endl;
   else
   {
   	if(d>0)
   	cout<<"roots are real and unequal"<<endl;
   	else
   	cout<<"roots are imaginary"<<endl;
   }
   return 0;
   
}
