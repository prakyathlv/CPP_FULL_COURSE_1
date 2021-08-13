#include<iostream>
using namespace std;
int max(int,int,int);
int main()
{
	int a=25,b=35,c=10,r;
	r=max(a,b,c);
	cout<<"maximum number is: "<<r<<endl;
	return 0;
}
int max(int x,int y,int z)
{
	if(x>>y&&x>>z)
	return x;
	else if(y>z)
	return y;
	else
	return z;
}
