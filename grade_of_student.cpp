#include<iostream>
using namespace std;
int main()
{
	float p,total=0;
	int i,m[6];
	for(i=1;i<=6;i++)
	{
		cout<<"enter the marks in subject "<<i<<endl;
		cin>>m[i];
		total=total+m[i];
	}
	p=total/6;
	cout<<"total marks out of 600 is "<<total<<" and percentage is "<<p<<endl;
	if(p>=90&&p<=100)
	cout<<"A"<<endl;
	 if(p<=70&&p>=89)
	cout<<"B"<<endl;
	 if(p<=50&&p>=69)
    cout<<"C"<<endl;
	 if(p<=35&&p>=49)
	cout<<"D"<<endl;
	if(p<=34&&p>=0)
	cout<<"FAIL"<<endl;	
	return 0;
}
