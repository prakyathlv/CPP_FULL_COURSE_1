#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   float a,b,c,r1,r2,d;
   cout<<"enter the a b and c"<<endl;
   cin>>a>>b>>c;
   d=b*b-4*a*c;
   cout<<d<<endl;
   r1=(-b+(int)sqrt(d))/2*a;
   cout<<"root1 is "<<r1<<endl;
   r2=(-b+(int)sqrt(d))/2*a;
   cout<<"root2 is "<<r2<<endl;
   return 0;
   
}
