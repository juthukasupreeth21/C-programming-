#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,avg;
	printf("Enter the values of a,b,c,d,e\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("Sum is:%d\n",sum);
	avg=sum/5;
	printf("Avg is:%d",avg);
	return 0;
	}
