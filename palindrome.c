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
	i=1;
	while(i<=nd)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
		i=i+1;
	}
	if(m==s)
    	printf("print the given number is palindrome ");
	else
    	printf("print the given number is not palindrome");
	printf("n\n\n\npress any key to exit");
	getch();
	return(0);
	
}
