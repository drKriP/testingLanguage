#include<iostream>

using namespace std;

int factorial(int n)
{
	if(n==0)
			return 1;
	return n*factorial(n-1);
}
int main()
{
	float n,i,fact,sum = 0;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact = factorial(i);
		sum = sum + (i/fact);
	}
	cout<<"Sum = "<<sum;
	return 0;
	
}
