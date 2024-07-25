#include<stdio.h>

typedef struct s{
	char name[20];
	int roll;
	int marks;
}Student;
/*
("Smriti",1,57),("ahana",2,45),........*/
main()
{
	int i;
	Student s[5];
	s[0].roll=1;
//	s[0].name[]=""
	s[0].marks=57;
	
	s[1].roll=2;
//	s[1].name[]="Ahana";
	s[1].marks=45;
	
	for( i=0;i<5;i++)
	{
		if(s[i].roll==2)
		printf("pegechi");
	}
	
}// select name from student where roll=2;
