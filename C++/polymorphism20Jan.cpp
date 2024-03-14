#include<iostream>

using namespace std;

int sum(int a, int b)
{
	int z ;
	z = a + b;
	return z;
}

int sum(int a, int b,int c)
{
	int z;
	z = a + b + c;
	return z;
}

int main()
{
	int a,b,c;
	cout<<"Enter the value of a b and c:"<<endl;
	cin>>a>>b>>c;
	cout<<sum(a,b)<<endl;
	cout<<sum(a,b,c)<<endl;
	return 0;
}
