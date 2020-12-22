#include <stdio.h>
#include <math.h>

int main()
{
	//Ask user for number 
	//Output all prime numbers between 0 and number
	//Output the total number of prime numbers
	//
	

	int start_number;
	int end_number;
	printf("What is the starting number? ");
	scanf("%d",&start_number);
	printf("What is the ending number? ");
	scanf("%d", &end_number);

	for (;start_number <= end_number; start_number++)
	{
	if (start_number == 2 || start_number == 3 || start_number == 5 || start_number ==7 )
	{	
		printf("%d\n",start_number);	
	
	}else if (start_number % 2 == 1)
		{
	
			 if (start_number % 3!= 0 && start_number % 5 != 0 &&  start_number % 7 !=0 &&  start_number %11!=0)

			{
				printf("%d\n", start_number);
			}
		}

	}

	return 0;

}
