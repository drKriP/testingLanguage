#include<iostream>

using namespace std;

class student
{
	public:
		char name[20];
		int roll;
		int mark1,mark2,mark3, total;
		
	void enter_name();
	void display();
};


void student::enter_name()
	{
		cout<<"enter the student: ";
		cin>>name;
		cout<<"enter the Roll: ";
		cin>>roll;
		cout<<"eneter mark1, mark2, mark3: \n";
		cin>>mark1>>mark2>>mark3;
		total = mark1 + mark2 + mark3;
	}

void student::display()
	{
		cout<<"Student Name: "<<name<<endl;
		cout<<"Mark1 : "<<mark1<<endl;
		cout<<"Mark2 : "<<mark2<<endl;
		cout<<"Mark3 : "<<mark3<<endl;
		cout<<"Total : "<<total<<endl;
	}

int main()
{
	student obj;
	obj.enter_name();
	obj.display();
	return 0;
}
