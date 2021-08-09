#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the basic salary "<<endl;
	float basic_salary;
	cin>>basic_salary;
	cout<<"enter the percentage of allowance "<<endl;
	float percentage_allowance;
	cin>>percentage_allowance;
	cout<<"enter the percentage of deduction "<<endl;
	float percentage_deduction;
	cin>>percentage_deduction;
	float net_salary=basic_salary+(basic_salary*percentage_allowance/100)+(basic_salary*percentage_deduction/100);
	cout<<"net salary is "<<net_salary<<endl;
}
