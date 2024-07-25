#include<iostream>
using namespace std;

int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}

int main()
{
	
	int n,r,i=1,s;
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"enter the value of r:";
	cin>>r;
	double c=fact(n)/(fact(r)*fact(n-r));
	cout<<n<<"C"<<r<<"="<<c;
	return 0;
	
}
