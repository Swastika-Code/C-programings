#include<iostream>
using namespace std;
int main() 
{
	int i,n,c=1;
	cout<<"enter a number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	  c=c*i;
	}
    cout<<"print the number:"<<c;
	  return 0;
}
