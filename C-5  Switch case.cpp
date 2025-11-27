#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("Enter operator(+,-,*,/,%):");
	scanf("%c,&op");
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	switch(op);
	{
		case'+':c=a+b;
	        	printf("Addition is:%d",c);
	            break;
		case'-':c=a-b;
				printf("Subtraction is:%d",c);
				break;
		case'*':c=a*b;
				printf("Multiplication is:%d",c);
				break;
		case'/':c=a/b;
				printf("Division is:%d",C);
				break;
		case'%':c=a%b;
				printf("Modulus is:%d",c);
				break;
		default:printf("Invalid Operator");
		break:		
	}
}
