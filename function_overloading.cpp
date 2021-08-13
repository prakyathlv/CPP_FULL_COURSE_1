#include<iostream>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
float add(float x, float y)
{
	return x+y;
}
int main()
{
	int a=10,b=20,c,d;
	c=add(a,b);
	cout<<"c="<<c<<endl;
	d=add(a,b,c);
	cout<<"d="<<d<<endl;
	float m=2.54f,n=5.02489f,k;
	k=add(m,n);
	cout<<"k="<<k<<endl;
	return 0;
	
}
