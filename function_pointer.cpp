#include<iostream>
using namespace std;
int max(int,int);
int min(int,int);
int main()
{
	int(*fp)(int,int);
	fp=max;
	(*fp)(10,5);
	fp=min;
	(*fp)(10,5);	
}
int max(int x,int y)
{
	return (x>y)?x:y;
}
int min(int x,int y)
{
	return (x<y)?x:y;
}
