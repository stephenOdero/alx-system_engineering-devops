#include <stdio.h>
/**
  * Description goes here
  *
*/

int main(void)
{
	/* A program to test nested while loops to print a square box */
	int i = 0;
	int j;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);

}
