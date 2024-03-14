#include<stdio.h>
union example
{
	char name[20];
	int roll;
}ar[10];
int main()
{
	int i;
	printf("Input..............\n");
	for(i=0;i<5;i++)
	{
	scanf("%s %d",&ar[i].name,&ar[i].roll);
	}
	printf("Output.............\n");
	for(i=0;i<5;i++)
	printf("Name = %s \n",ar[i].name);
}
