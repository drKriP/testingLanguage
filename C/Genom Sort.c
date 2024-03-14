#include<stdio.h>
#include<conio.h>
void gnome(int a[],int n)
{
	int i,temp;
	for(i=1;i<n; )
	{
		if(a[i-1]<=a[i])
			i++;
		else
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
			--i;
			if(i==0)
				i=1;
		}
	}
}
void main()
{
	int a[20],i,n;
	printf("\nEnter no. of terms: ");
	scanf("%d",&n);
	printf("Enter elements to be sorted:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	gnome(a,n);
	printf("Sorted List: ");
	for(i=0;i<=n-1;i++)
		printf("%d ",a[i]);
}


