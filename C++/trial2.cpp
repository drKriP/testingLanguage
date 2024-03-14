#include<iostream>
using namespace std;
class bank	{
	public:
	int balance,money;
	
		int ac_no;
		void deposit()	{
			cout<<"Enter amount to deposit :"<<endl;
			cin>>balance;
		}
		void balance_check()	{
			cout<<"Remaining Balance :"<<balance<<endl;
		}
		void transaction()	{
			cout<<"Enter amount to withdraw :";
			cin>>money;
			balance -= money;
		}
};

void transfer(bank o1,bank o2,int amount)	{
	o1.balance -= amount;
	o2.balance += amount;
}
int main()	{
	int amount;
	bank o1,o2,o3;
	cout<<"Enter 1st Ac no : ";
	cin>>o1.ac_no;
	cout<<"Enter 2nd Ac no : ";
	cin>>o2.ac_no;
	tranfer()
	
}


























