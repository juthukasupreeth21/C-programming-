#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],x[10][10],r,c,i,j;
	printf("Enter row and column values");
	scanf("%d%d",&r,&c);
	printf("Enter A matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;j<c;j++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition Matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",x[i][j]);
		}
	}
	printf("\n");
	return 0;
}
