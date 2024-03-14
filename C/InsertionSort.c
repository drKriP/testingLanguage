#include<stdio.h>
void insertionSort(int ar[])
{
	int i,j,key;
	for (i=1;i<6;i++) 
	{ 
        key=ar[i]; 
        j=i-1; 
        while (j>=0 && ar[j]>key)
		{ 
            ar[j+1]=ar[j]; 
            j=j-1; 
        } 
        ar[j+1]=key; 
	}
}
void main()
{
	int ar[6]={7,5,1,3,8,4};
	int n,i,j,key;
	printf("Unsorted Numbers: ");
	for(i=0;i<6;i++)
	{
		printf("%d, ",ar[i]);
	}
	insertionSort(ar);
	printf("\nSorted Numbers: ");
	for(i=0;i<6;i++)
	{
		printf("%d, ",ar[i]);
	}
}
