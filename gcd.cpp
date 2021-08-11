#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"enter the two dividents\n";
	cin>>m>>n;
	
	
		for(;;)
		{
			if(m>n)
			{
				m=m-n;
			}
			else
			{
				n=n-m;
			}
			if(m==n) break;
		}
	
	cout<<"greatest common divisor is "<<m;
	return 0;
	}
