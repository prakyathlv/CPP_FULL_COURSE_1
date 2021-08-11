#include<iostream>
using namespace std;
int main()
{
	int a[6],n,max,sum=0;
	cout<<"enter the array elements\n";
	for(int i=0;i<6;i++)
	{
	
	cin>>a[i];
    }
    max=a[0];
	for(int i=1;i<6;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"max number is "<<max<<endl;
	return 0;
}
