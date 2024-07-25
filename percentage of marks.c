#include<stdio.h>
int main()
{
	float eng,phy,chem,math,coms,total,average,percentage;
	
	printf("enter marks of five subject:\n");
	
	scanf("%f%f%f%f%f%f",&eng,&phy,&chem,&math,&coms);
	
	total=eng+phy+chem+math+coms;
	
	average=total/5;
	
	percentage=(total/500)*100;
	
	printf("total marks:\n",total);
	printf("average marks:\n",average);
	printf("percentage:\n",percentage);
	return 0;
}
