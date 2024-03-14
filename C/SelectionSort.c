#include<stdio.h>
void selectionSort(int ar[])
{
	int i,j,temp;
	for(i=0;i<6;i++)
	{
      for(j=i+1;j<6;j++)
	  {
         if(ar[i]>ar[j])
		 {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
         }
      }
   }
}
void main()
{
	int ar[6]={8,5,9,3,6,2};
	int i,j,temp,key;
	printf("Unsorted Numbers: ");
	for(i=0;i<6;i++)
	{
		printf("%d, ",ar[i]);
	}
	selectionSort(ar);
	printf("\nSorted Numbers: ");
	for(i=0;i<6;i++)
	{
		printf("%d, ",ar[i]);
	}
}
