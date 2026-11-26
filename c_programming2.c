#include<stdio.h>
#include<math.h>

int main()

{
	int radius=5;
	float pi=3.14;
	
	float area=pi*radius*radius;
	float circumference=2*pi*radius;
	printf("area = %f",area);
	printf("circumference is %f",circumference);
	return 0;
}