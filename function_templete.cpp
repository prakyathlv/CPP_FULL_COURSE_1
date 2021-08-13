#include<iostream>
using namespace std;
template<class t>
t maxim(t x,t y)
{
return x>y?x:y;
}
int main()
{
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,5.6f)<<endl;
	cout<<maxim(188975l,78924515l)<<endl;
	return 0;
}


