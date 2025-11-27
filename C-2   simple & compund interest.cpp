#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	double si,ci;
	printf("Enter p t r values:\n");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p*pow(1+r/100.0,t)-p;
	printf("Simple interest is:%1f\n",si);
	printf("compound interest is:%1f",ci);
	return 0;
}
