#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the number:\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"the sum of first "<<n<<" natural number is "<<sum<<endl;
	return 0;
}
