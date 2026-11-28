#include<stdio.h>

int main()
{
	printf("number not divisible by 3:\n");
	for(int i=1;i<=15;i++)
	{
		if (i%3==0)
		{
		continue;
		}
	printf("%d\n",i);
	}
	return 0;
}