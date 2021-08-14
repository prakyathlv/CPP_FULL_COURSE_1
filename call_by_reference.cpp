#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	cout<<&a<<&b<<"\n";
	int temp=b;
	b=a;
	a=temp;
}
int main()
{
	int x=10,y=20;
	cout<<&x<<&y<<endl;
	cout<<x<<" "<<y<<"\n";
	swap(x,y);
	cout<<x<<" "<<y;
	return 0;
}
