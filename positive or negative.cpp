#include<iostream>
using namespace std; 
int main()
{
	int x;
	cout<<"enter a number:";
	cin>>x;
	if(x>0)
	{
		cout<<"positive";
	}
	else if(x==0)
	{
	    cout<<"zero";
	}
	else{
		cout<<"negative";
	}
	return 0;
}
