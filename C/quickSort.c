#include<stdio.h>
int first,last,pI,i=0,j=5,temp;
int ar[6]={9,2,4,5,1,8,};

void quickSort(int i,int j)
{
 if(i<j)
 {
  pI=i;
  first=i;
  last=j;
  while(first<last)
  {
   while(ar[first]<=ar[pI] && first<j)
   {
    first++;
   }
   while(ar[last]>ar[pI])
   {
    last--;
   }
   if(first<last)
   {
    temp=ar[first];
    ar[first]=ar[last];
    ar[last]=temp;
   }
  }
  temp=ar[pI];
  ar[pI]=ar[last];
  ar[last]=temp;
  quickSort(i,last-1);
  quickSort(last+1,j);
  }
}

void main()
{
int o;
printf("Unsorted Numbers= ");
for(o=0;o<6;o++)
printf("%d, ",ar[o]);

quickSort(0,5); //Function Call for Quick Sort

printf("\nSorted Numbers= ");
for(o=0;o<6;o++)
printf("%d, ",ar[o]);
}
