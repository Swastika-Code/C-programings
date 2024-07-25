#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n,nd,r,s;
	s=0;
	printf("enter the number of digit:");
	scanf("%d",&nd);
	printf("enter the number:");
	scanf("%d",&n);
	i=1;
	while(i<=nd)
	{
		r=n%10;
		n=n/10;
		s=s+r;
		i=i+1;
	}
	printf("the sum of digit is %d",s);
	printf("\n\n\n\npress any key to exit");
	getch();
	return(0);
}
