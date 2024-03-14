
#include<iostream>
using namespace std;
class Float	{
	float x;
	public:
		void getdata()	{cin>>x;}
		Float operator + (Float a)	{
			Float temp;
			temp.x = x + a.x;
			return temp;
		}
		Float operator - (Float a)	{
			Float temp;
			temp.x = x - a.x;
			return temp;
		}
		Float operator * (Float a)	{
			Float temp;
			temp.x = x * a.x;
			return temp;
		}
		Float operator / (Float a)	{
			Float temp;
			temp.x = x / a.x;
			return temp;
		}
		void display()	{cout<<x;}
};

void Calculator()	{
	Float o1,o2,o3;
	char choice;
	for(;;)	{
		cout<<endl<<endl<<"Enter 1st operand 	: ";
		o1.getdata();
		cout<<"Enter 2nd operand 	: ";
		o2.getdata();
		cout<<"Enter operator(+,-,*,/)	: ";
		cin>>choice;
		switch(choice)	{
			case '+'	:	o3 = o1 + o2;
						 			cout<<"Sum = ";
			 						o3.display();
			 						break;
			case '-'	:	o3 = o1 - o2;
			 						cout<<"Difference = ";
			 						o3.display();
			 						break;
			case '*'	:	o3 = o1 * o2;
			 						cout<<"Product = ";
			 						o3.display();
			 						break;
			case '/'	:	o3 = o1 / o2;
			 						cout<<"Division = ";
			 						o3.display();
			 						break;
			default		:	cout<<"Wrong Choice"<<endl;
		}
		cout<<"\nDo you want to exit (y/n) : ";
		cin>>choice;
		if(choice=='y')	exit(0);
	}
}
int main()	{
	Calculator();
	return 0;
}
