#include<stdio.h>
int main()
{
	float eng,phy,chem,math,coms,total,average,percentage;
	
	printf("enter marks in english:\n");
//	scanf("%f,%f,%f,%f,%f,%f",&eng,&phy,&chem,&math,&coms);
	scanf("%f",&eng);
	printf("enter marks in physics:\n");
	scanf("%f",&phy);
	printf("enter marks in chem:\n");
	scanf("%f",&chem);
	printf("enter marks in maths:\n");
	scanf("%f",&math);
	printf("enter marks in computer:\n");
	scanf("%f",&coms);
	
	total=eng+phy+chem+math+coms;
	
	average=total/5;
	
	percentage=(total/500)*100;
	
	printf("total marks:%f\n",total);
	printf("average marks:%f\n",average);
	printf("percentage:%f\n",percentage);
	return 0;
}
