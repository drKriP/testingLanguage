#include<stdio.h>
void bubbleSort(int ar[])
{
	int i,j,temp;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}
void main()
{
	int ar[6]={7,3,8,1,6,9};
	int i,j,temp;
	printf("Unsorted Numbers: ");
	for(i=0;i<6;i++)
	{
		printf("%d, ",ar[i]);
	}
	bubbleSort(ar);	
	printf("\nSorted Numbers: ");
	for(i=0;i<6;i++)
	{
		printf("%d, ",ar[i]);
	}
}
