#include<stdio.h>
main()
{
	int array[10],i,num,ev[10],od[10],*od1,c1=0,c2=0,sum=0;
	printf("enter the size of array:");
	scanf("%d",&num);
	
	od1=&od[0];
	for(i=0;i<num;i++)
	{
		printf("enter element %d:",i);
		scanf("%d",&array[i]);
	}

	for(i=0;i<num;i++)
	{
		if(array[i]%2==0){
			ev[c1++]=array[i];
		}
		else{
			od1[c2++]=array[i];
		}
	}
	printf("evens:\n");
	for(i=0;i<c1;i++){
		printf("%d,",ev[i]);
	}
	printf("\nodds:\n");
	for(i=0;i<c2;i++){
		printf("%d,",od1[i]);
	}
	for(i=0;i<c2 || i<c1;i++){
		sum=ev[i]+od1[i];
		printf("sum=%d\n",sum);
	}
	
	
}
