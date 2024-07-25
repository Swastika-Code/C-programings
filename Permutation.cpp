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
	int n,r;
	double p;
	cout<<"N=";
	cin>>n;
	cout<<"R=";
	cin>>r;
	p=fact(n)/fact(n-r);
	cout<<n<<"P"<<r<<" = "<<p;
	
	
	
	
}
