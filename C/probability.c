#include<stdio.h>
float solution(float pmb, float pab, float p1)
{
	float probability_seperate = (pmb*(1-pab)) + (pab*(1-pmb));
	float probability_rom = probability_seperate*p1;
	return probability_rom;
}
void main()
{
	float pmb,pab,p1;
	printf("Enter values between 1  and 0\n");
	printf("First line : ");
	scanf("%f",&pmb);
	printf("Second line : ");
	scanf("%f",&pab);
	printf("Third line : ");
	scanf("%f",&p1);
	printf("\n");
	printf("Probability = %.6f",solution(pmb,pab,p1));
}
