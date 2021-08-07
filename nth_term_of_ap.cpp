#include<iostream>
using namespace std;
int main()
{
	int t,a,n,d;
	cout<<"enter the number of terms ";
	cin>>n;
	cout<<"enter the first term ";
	cin>>a;
	cout<<"enter the common difference ";
	cin>>d;
	t=a+(n-1)*d;
	cout<<"the nth term is "<<t;
	
}
