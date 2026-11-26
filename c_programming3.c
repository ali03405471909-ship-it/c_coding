#include<stdio.h>

int main()
{
	printf("---for loop countdown---\n");
	for(int i=5;i>0;i--)
	{
		printf("%d\n",i);
	}
	printf("liftoff!\n");
	printf("---while loop countdown---\n");
	int count=5;
	while(count>0)
	{
		printf("%d\n",count);
		count--;
	}
	printf("liftoff!\n");
	
	return 0;
}