#include<iostream>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2,D,r,i;
	cout<<"enter the first numbers:a";
	cin>>a;
	cout<<"enter the sceond numbers:b";
	cin>>b;
	cout<<"enter the third numbers:c";
	cin>>c;
	D=b*b-4*a*c;
	
	if (D>0)
	{
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		cout<<"x1= "<<x1;
		cout<<"x2= "<<x2;
		cout<<"roots are real";
		
	}
	else if(D==0)
	{
		cout<<"only one real roots";
	}
	else 
	{
		cout<<"no real roots";
	}
	
	return 0;
}
