#include<stdio.h>
#include<conio.h>
int MAX = 100;
void simpleMerge(int a[], int low, int mid, int high)
{
	int i = low, j = mid+1, k = low;
	int c[MAX];
	while(i <= mid && j <= high)
	{
		if(a[i] < a[j])
			c[k++] = a[i++];
		else
			c[k++] = a[j++];
	}
	while(i <= mid)
		c[k++] = a[i++];
	while(j <= high)
		c[k++] = a[j++];
	for(i = low; i <= high; i++)
		a[i] = c[i];
}
void mergeSort(int a[], int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		simpleMerge(a, low, mid, high);
	}
}
void main()
{
	int i,n,a[50];
	printf("Enter array size : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	mergeSort(a, 0, n-1);
	printf("Sorted Elements :");
	for(i=0;i<n;i++)
	{
	printf(" %d", a[i]);
	}
}
