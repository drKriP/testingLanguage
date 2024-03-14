#include<iostream>

using namespace std;

float factorial(float n)
{
	if(n==0)
			return 1.0;
	return n*factorial(n-1);
}
int main()
{
	float n,i,fact,sum = 0;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		//fact = factorial(i);
		sum = sum + (1/factorial(i));
	}
	cout<<"Sum = "<<sum;
	return 0;
	
}
