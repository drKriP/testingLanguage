#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a, *a = *b, *b = temp;
}
int main()
{
	int a=1,b=2;
	
//	a ^= b ^=a ^=b;
	
	swap(&a,&b);
	cout<<a<<" "<<b;
	
	return 0;
	
}
