#include<stdio.h>
int main()
{
	char a;
	char b[10];
	char c[20];
	printf("Enter a character\n");
	scanf("%c",&a);
	printf("Enter a word\n");
	scanf("%s\n",&b);
	printf("Enter a sentence\n");
	scanf("%[^\n]s",&c);
	printf("character:%c\nword:%s\nSentence:%s",a,b,c);
	return 0;
}
