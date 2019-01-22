/*************************************************************************
    > File Name: counter.c
		printf("counter = %d\n",counter);
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: Tue Jan 22 22:18:00 2019
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	int counter = 0;
	
	printf("count your fingers.\n");
	
	 counter = 0;
/*
	 while(counter < 10)
	{
		counter++;
		printf("counter = %d\n",counter);
	}
	return 0; 
}
*/

	counter = 1;

 	while(1)
	{
		printf("counter = %d\n",counter);
		counter++;

	}

/* counter = 101;
	 do{
		  counter++;
		  printf("counter = %d\n",counter);
	   } while (counter < 10);
	}
*/
}
