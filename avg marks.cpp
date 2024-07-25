#include<iostream>
using namespace std;
int main()
{
	int marks[5],i,avg;
	float sum=0;
	cout<<"enter the marks obtained in phy,chem,math,cs,eng:\n";
	for(i=0;i<5;i++)
	{
		cout<<"enter the marks";
		cin>>marks[i];
		sum=sum+marks[i];
	}
	avg=sum/5;
	cout<<"average marks: "<<avg;
	return 0 ;
}
