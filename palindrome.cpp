#include<iostream>
using namespace std;
int main()
{
	int n,rev=0;
	cout<<"enter the number:\n";
	cin>>n;
	int p=n;
	while(n>0)
	{
		int m=n%10;
		rev=rev*10+m;
		n=n/10;
	}
	if(p==rev)cout<<p<<" is a palindrome\n";
	else cout<<p<<" is not a palindrome\n";
	return 0;
	
}
