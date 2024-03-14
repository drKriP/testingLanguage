#include<stdio.h>
void main()
{
	char a;
	char st[20];
	scanf("%[^\n]%*c",&a);
	scanf("%[^\n]%*c",st);
	printf("%c\n",a);
	printf("%s",st);
}
