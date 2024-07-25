#include<iostream>
using namespace std;
int main()
{
	int y,sy,ey;
	cout<<"enter a starting year:";
	cin>>sy;
	cout<<"enter a ending year:";
	cin>>ey;
	y=sy;
	while(y<=ey)
	{
		if(y%4==0 && y%100!=0 || y%400==0)
		cout <<y<<"\n";
		y++;
		
	}
	return 0;
}
