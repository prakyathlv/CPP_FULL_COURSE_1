#include<iostream>
using namespace std;
int main()
{
	int count=1,n;
	cout<<"enter the number\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
		if(i+j<n-1)
		{
			cout<<"*";
		}
		else
		
			cout<<" ";
		
			if(j>i)
		{
			cout<<"*";
		}
		else
		
			cout<<" ";
		
		}
		
		
	
		cout<<endl;
	}
	
	
}
