#include<stdio.h>
void main()	{
	{//pointer trial
	/*int *p;
	int r = 100;
	p = &r;
	*p = *p + 5;
	printf("%d",*p);
	printf("\n%d",r);*/}
	
	
	int a,b,result;
	int *c,*r;
	scanf("%d %d",&a,&b);
	c = &a;
	r = &b;
	result = *c + *r;
	printf("%d",result);
	printf("\n%d", a+b);
}
