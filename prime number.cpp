#include<iostream>
using namespace std;
int main() 
	int n,i,c=0,c1=0,m;
	cout<<"enter a number:";
	cin>>n;
	m=n+2;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		c++;
	}
//	if(c==0)
//	cout<<" prime number:";
//	else
//	cout<<"not prime number: ";

	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		c1++;
	}
	if(c==0&&c1==0)
	cout<<"twin prime number:";
	else
	cout<<"not twin prime number:";
	return 0;
}
