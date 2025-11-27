#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a b values:");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND:%d\n",c);
	c=a|b;
	printf("Bitwise OR:%d\n",c);
	c=a^b;
	printf("Bitwise EX-OR:%d\n",c); 
	c=a<<b;
	printf("Bitwise LEFT SHIFT:%d\n",c);
	c=a>>b;
	printf("Bitwise RIGHT SHIFT:%d\n",c);
	return 0;
}
