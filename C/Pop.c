#include<stdio.h>
#define MAX 10
int stack[10],top=-1,item,i=1;
int isFull()
{
	if(top+1==MAX)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	if(isFull())
	{
		printf("Stack is full.\n");
	} 
	else
	{
		top++;
		printf("Enter Item %d = ",top+1);
		scanf("%d",&item);
		stack[top]=item;
	}
}
