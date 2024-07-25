#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter a number:";
	cin>>x;
	if(x%9==0||x%10==8)
	{
		cout<<"it is a puzz number";
	}
	else
	{
		cout<<"it is a not puzz number";
	}
	
	return 0;
}
