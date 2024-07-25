#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter a year:";
	cin>>x;
	if(x%4==0 && x%100!=0 ||x%400==0)
	{
		cout<<"leap year";
	}
	else{
	
	cout<<"not a leap year";}
	return 0;
}

