#include<iostream>
using namespace std;
int main() 
{
	int x;
	cout<<"enter a number:";
	cin>>x;
	if(x%5==0||x%7==0)
	{
		cout<<"div by 5 or 7";
		
	}
	else 
	{
		cout<<"not div by 5 or 7";
	}
	return 0;
}
