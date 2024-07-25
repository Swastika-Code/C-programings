#include <stdio.h>
main() 
{
    int start_year = 1947,end_year = 2024,i = 0;
    
    while(start_year<= end_year) 
	{

        if (i % 4 == 0) 
		{
        printf("Number of leap years between %d and %d: %d\n", i);
        }
    }
      i++;
    return 0;
}
