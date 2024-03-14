#include<iostream>

using namespace std;

class person
{
	public:
		int salary, expenditure, balance;
	
	
		void enter_salary()
		{
			cout<<"\nenter the salary";
			cin>>salary;
			balance = salary;
		}
		
		void expend(int exp)
		{
			balance = balance - exp;
		}
		
		void remain()
		{
			cout<<"\nBalance: "<<balance;
		}
};


int main()
{
	person p1;
	p1.enter_salary();
	p1.expend(300);
	p1.remain();
	p1.expend(200);
	p1.expend(210);
	p1.remain();
	
}
