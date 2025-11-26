#include<stdio.h>
int main ()
{
	int base,height,area;
	printf("Enter base of triangle:\n");
	scanf("%d",&base);
	printf("Enter height of triangle:\n");
	scanf("%d",&height);
	area=base*height/2;
	printf("Area of triangle:%d",area);
	return 0;
	}
