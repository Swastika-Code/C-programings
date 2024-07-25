#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter a number:";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		j=n*i;
		cout<<n<<"X"<<i<<"="<<j<<"\n";
	}
}


