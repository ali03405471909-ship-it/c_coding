#include<stdio.h>
#include<math.h>

int main ()
{
	int num ;
	printf("enter a number:");
	scanf("%d",&num);
	
	if (num>=0)
	{
	    printf("the number is positive");
	}
    else if (num<=0)
    {
    	printf("the number is negative");
	}
	else
	    printf("the number you entered is zero");
	
	return 0;
}