#include<iostream>
using namespace std;

class student
{
	
	public:
		void display1()
		{
			cout<<"hello 111111"<<endl;
		}
};
class stud: public student
{
	public:
		void display2()
		{
			cout<<"hello 222222"<<endl;
		}
};

int main()
{
	stud obj;
	obj.display1();
	
	obj.display2();
	
	return 0;
}
