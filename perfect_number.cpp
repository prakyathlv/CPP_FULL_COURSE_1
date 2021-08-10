#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the number\n";
	cin>>n;
	cout<<"factors of "<<n<<" are ";
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			sum=sum+i;
		}
		if(n==sum)
		{
			cout<<"\n";
			cout<<n<<" is perfect number";
		}
	}
	return 0;
}
