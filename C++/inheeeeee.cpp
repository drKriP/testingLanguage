#include<iostream>
using namespace std;

class college
{
	public:
		char student_name[20];
		int reg,age;
		void student_info()
		{
			cout<<"Enter your name : ";
			cin>>student_name;
			cout<<"Enter your registration number : ";
			cin>>reg;
			cout<<"Enter your age : ";
			cin>>age;
		}
		void display_info()
		{
			cout<<"Name : "<<student_name<<endl;
			cout<<"Registration Number : "<<reg<<endl;
			cout<<"Age : "<<age<<endl;
		}
};
class cse: public college
{
	public:
	void input_info()
	{
		cout<<"CSE\n";
		student_info();
	}
	void display()
	{
		cout<<"CSE\n";
		display_info();
	}
};
class civil: public college
{
	public:
	void input_info()
	{
		cout<<"Civil\n";
		student_info();
	}
	void display()
	{
		cout<<"Civil\n";
		display_info();
	}
};

int main()
{
	cse o1;
	civil o2;
	o1.input_info();
	o2.input_info();
	o1.display();
	o2.display();
	
	return 0;
}
