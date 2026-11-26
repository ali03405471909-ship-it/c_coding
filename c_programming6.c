#include<stdio.h>
#include<math.h>

int main ()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	
	if (num%2==0)
	{
		printf("the number user entered is even");
	}
	else
	{
		printf("the number user entred is odd");
	}
	return 0;
}