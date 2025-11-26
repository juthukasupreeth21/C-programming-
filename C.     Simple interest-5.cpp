#include<stdio.h>
int main()
{
	int p,t,r,si;
	printf("Enter values of p t r\n");
	scanf("%d%d%d",&p,&t,&r);
	si=p*t*r/100;
	printf("Simple interest is:%d",si);
	return 0;
}
