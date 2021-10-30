#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int guess,number,nguesses;
	srand(time(0));
	number = rand()%100+1;
	
	do
	{
		printf("Guess a number between 1-100\n");
		scanf("%d",&guess);
		
		if(guess>number)
		{
			printf("Enter a Lower number \n");
		}
		else if(guess<number)
		{
			printf("Enter a higher number \n");
		}
		else
		{
			printf("Your points are  %d \n",nguesses);
		}
		nguesses++;
	}
	
	
	while(guess!=number);
}
