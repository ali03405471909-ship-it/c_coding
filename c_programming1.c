#include<stdio.h>

int main()
{
	int num;
	printf("enter a positive integer:");
	scanf("%d",&num);
	if (num<0)
	{
		printf("please enter a positive integer");
		return 0;
	}
	
	int total=0;
	for(int i=1;i<=num;i++)
	{
	total=total+i;
	}
	printf("the sum of positive integers from 1 to %d=%d\n",num,total);
	
	return 0;
}