#include<iostream>

using namespace std;

class bank
{
	public:
		int acc_no,balance;
		char name[20],type[20];
	
	void create_account()
	{
		cout<<"Enter new account number : ";
		cin>>acc_no;
		cout<<"Enter account holder name : ";
		cin>>name;
		cout<<"Enter the type of account (Saving/Current) : ";
		cin>>type;
		cout<<"Enter the opening balance : ";
		cin>>balance;
	}
	
	void rem_balance()
	{
		cout<<"Your Remaining Balance is "<<balance<<endl;
	}
	
	void deposit()
	{
		int amt;
		cout<<"Enter the deposit amount : ";
		cin>>amt;
		balance = balance + amt;
	}
	void withdraw()
	{
		int amt;
		cout<<"Enter the withdrawal amount : ";
		cin>>amt;
		balance = balance - amt;
	}
}p[100];
void new_account(int *count)	
{
	p[*count].create_account();
	*count += 1;
}
int search_ac(int ac_no, int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(ac_no == p[i].acc_no)
		{
			cout<<"Name : "<<p[i].name<<"\nAccount Type : "<<p[i].type<<endl;
			return i;
		}
	}
	//cout<<"Beep";
	return 101;
}
void transfer(int count, int i)
{
	int amount,ac_no,j;
	cout<<"Enter the recipient's account number : ";
	cin>>ac_no;
	j=search_ac(ac_no,count);
	if(j==101)
	{
		cout<<"Account number not found.\nCanceling..\n";
	}
	else
	{
		cout<<"Enter the amount : ";
		cin>>amount;
		p[i].balance -= amount;
		p[j].balance += amount;
		cout<<"Transfer Successful\n";
	}
}

int main()
{
	int choice,n,count=0,ac_no,i,loop;
	for(;;)
	{
		cout<<"**BANK**"<<endl;
		cout<<"1. Create Account\n2. Login Account\nEnter 1 or 2 : ";
		cin>>n;
		if(n==1)
			new_account(&count);
		else if(n==2)
		{
			cout<<"Enter your account no. : ";
			cin>>ac_no;
			i = search_ac(ac_no,count);
			if(i==101)
			{
				cout<<"No account for this account no.\nPlease try again.\n";
			}
			else
			{
				loop = 1;
				do
				{
					cout<<"---Transaction Menu---"<<endl;
					cout<<">1. Deposit\n>2. Withdraw\n>3. Transfer\n>4. Balance\n>5. Exit\nEnter Your Choice : ";
					cin>>choice;
					switch(choice)
					{
						case 1: p[i].deposit();
								break;
						case 2:	p[i].withdraw();
								break;
						case 3:	transfer(count,i);
								break;
						case 4: p[i].rem_balance();
								break;
						case 5: cout<<"Exiting..\n";
								loop = 0;
								break;
						default: 	cout<<"Wrong Choice";
									break;
					}
				}while(loop);
			}
		}
	}
	return 0;
	
}

