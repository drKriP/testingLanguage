#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int recursion(int i,int j)
{
	if(i<6)
	{
		if(i<3)
		{
			printf("%d\n",j);
			getch();	
			recursion(i+1,j+1);
		}
	//printf("%d\n",i);
	recursion(i+1,j+1);
	//printf("%d\n",i);

	}
}
void main()
{
	int i=0,j=1;
	recursion(i,j);
}
