#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n,nd,r,s,m;
	s=0;
	printf("enter the number of digit:");
	scanf("%d",&nd);
	printf("enter the number:");
	scanf("%d",&n);
	m=n;
	for(i=1;i<=nd;i++)
	{
		r=n%10;
		n=n/10;
		s=s+r* r*r;
	}
	if(m==s)
	printf("the given number is armstrong number");
	else
	printf("\n\n\n\npress any key to exit");
	getch();
	return(0);
}
