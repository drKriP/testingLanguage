#include<stdio.h>
int power(int i, int base, int exponent, int pow)	{
	if(i<exponent)	{
		pow *= base; // pow = pow*base
		i++;
		power(i,base,exponent,pow);
	}
	else
		return pow;
}
void main()	{
	int base, exponent,pow;
	scanf("%d %d",&base,&exponent);
	pow = base;
	printf("Power = %d",power(1,base,exponent,pow));
}
