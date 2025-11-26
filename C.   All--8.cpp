#include<stdio.h>
int main()
{
	int x,y,add,sub,mul,div;
	printf("Enter values of x y:");
	scanf("%d%d",&x,&y);
	add=x+y;
	printf("Addition is:%d\n",add);
	sub=x-y;
	printf("Subtraction is:%d\n",sub);
	mul=x*y;
	printf("Multiplication is:%d\n",mul);
	div=x/y;
	printf("Division is:%d\n",div);
	return 0;
}
