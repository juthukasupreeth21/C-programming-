#include<stdio.h>
int main()
{
	int a,u,t;
	float s;
	printf("Enter a,u,t values:");
	scanf("%d%d%d",&a,&u,&t);
	s=u*t+(a*t*t)/2;
	printf("Distance fall is:%f",s);
	return 0;
}
