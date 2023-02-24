#include <stdio.h>
/**
  * Definition goes here
  *
*/

/* Declaration of function to get the max value of two inputs */
int maxValue(int a, int b);

/* Main function of the program */
int main(void)
{
	int a;
	int b;
	int maxNum;

	printf("Enter two numbers:\n");
	printf("First Number: ");
	scanf("%d", &a);
	printf("Second Number: ");
	scanf("%d", &b);
	
	maxNum=maxValue(a,b);

	printf("The numbers entered are %d and %d\n",a,b);
	printf("The maximum of the two numbers is: %d\n",maxNum);

	return (0);
}

/* Definiton of the function maxValue */

int maxValue(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	else if (b > a)
	{
		return (b);
	}
	else if ( a == b)
	{
		printf("Values are equal\n");
		return (a);
	}
}
