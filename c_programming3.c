#include<stdio.h>

int main ()
{
	double celcius=37;
	double fahrenheit=98.0;
	
	fahrenheit=1.8*celcius+32;
	celcius=(fahrenheit-32)/1.8;
	
	printf("celcius  is %f\n",fahrenheit);
	printf("fahrenheit  is %f\n",celcius);
	
	return 0;
}