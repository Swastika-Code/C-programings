#include<iostream>
using namespace std;
int main()
{
	int n,s=0,a;
	cout<<"enter a number:";
	cin>>n;
	while(n!=0)
	{
		a=n%10;
		s=s+a;
		n=n/10;
	}
	cout<<"the sum of the digits:"<<s;
	
	
	
	
	
}
