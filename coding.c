#include<stdio.h>
#include<math.h>

int main ()
{
	int a=1;
	int b=5;
	int c=6;
	
	int discriminent = b*b - 4*a*c;
	
	int root1=(-b+sqrt(discriminent))/2*a;
	int root2=(-b-sqrt(discriminent))/2*a;
	
	printf("root1: %d\n",root1);
	printf("root2: %d",root2);
	
	return 0;
	
}