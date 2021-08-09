#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age: "<<endl;
	cin>>age;
	if(age<12||age>50)
	cout<<"eligible for vaccination"<<endl;
	else 
	cout<<"not eligible for vaccination"<<endl;
	return 0;
}
