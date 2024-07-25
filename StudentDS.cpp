#include<stdio.h>
typedef struct s
{
	int roll;
	int Class;
	long int phone;
}Student;

main()
{
	Student Swastika,Noyal,Sara;
	
	Swastika.Class=12;
	Swastika.roll=13;
	Swastika.phone=7894655421;
	
	Noyal.Class=10;
	Noyal.roll=14;
	Noyal.phone=78933455421;
	
	Sara.Class=16;
	Sara.roll=15;
	Sara.phone=78933455231;
	
	
	printf("Name\t\tclass\troll\n");
	printf("Swastika\t%d\t%d\n",Swastika.Class,Swastika.roll);
	printf("Noyel\t\t%d\t%d\n",Noyal.Class,Noyal.roll);
	printf("Sara\t\t%d\t%d\n",Sara.Class,Sara.roll);
}
