#include<stdio.h>

int main()

{
	int numbers[5]={10,20,30,40,50};
	int total=0;
	float average;
	
	for(int i=0;i<=4;i++)
	{
	total=total+numbers[i];
	
	}
	average=total/5;
	printf("total:%d\n",total);
	printf("average:%f",average);

	
	return 0;
}