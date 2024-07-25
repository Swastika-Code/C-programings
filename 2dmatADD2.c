#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[300][10],i,j,n,total,avg;
	printf("enter the value of matrixA:\n");
	for(i=0;i<3;i++)
	{
		printf("*****student %d*****\n",i);
		printf("enter the marks of physics:");
		scanf("%d",&a[i][0]);
		printf("enter the marks of computer:");
		scanf("%d",&a[i][1]);
		printf("enter the marks of math:");
		scanf("%d",&a[i][2]);

	}
	printf("enter the roll number of the student:");
	scanf("%d",&n);
	total=a[n][0]+a[n][1]+a[n][2];
	avg=total/3;
	
	printf("total marks of student%d is =%d\n",n,total);
	printf("average marks of student%d is =%d\n",n,avg);
	
}
