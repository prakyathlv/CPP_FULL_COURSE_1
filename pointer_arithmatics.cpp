#include<iostream>
using namespace std;
int main()
{
	int a[100],*p,*q,n;
	cout<<"enter the size of array:\n";
	cin>>n;
	cout<<"enter the array elements:\n\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=a;q=a+3;
	cout<<a<<" "<<&a<<" "<<*a<<" "<<p<<" "<<&p<<" "<<*p<<endl;
	cout<<*(p++)<<" "<<*(p--)<<" "<<*(p=p+2)<<" "<<*(p=p-2)<<" "<<(q-p);
	return 0;
}
