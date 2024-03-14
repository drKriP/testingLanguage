#include<stdio.h>
int fact=1;
int factorial(int n, int i)	{
	if(i<=n)	{
		fact *= i;
		i++;
		factorial(n,i);
	}
	else
		return fact;
}
void main()	{
	int n,factor,i = 1;
	scanf("%d",&n);
	printf("factorial = %d",factorial(n,i));
}
