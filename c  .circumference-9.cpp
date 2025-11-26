#include<stdio.h>
int main()
{
	float circumference,r;
	printf("Enter values of radius r:");
	scanf("%f",&r);
	circumference=2*3.14*r;
	printf("circumference of circle is:%.2f",circumference);
	return 0;
}
