#include<iostream>
using namespace std;
int main()
{
	int n,a,r=0,m;
	cout<<"enter a number:";
	cin>>n;
	m=n;
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	if(m==r)
	cout<<"the number is a palindrome";
	else
	cout<<"the number is not a palindrome";
	return 0;
}
