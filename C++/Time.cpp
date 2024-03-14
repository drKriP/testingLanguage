#include<iostream>

using namespace std;

class time	{
	int hour;
	int minutes;
	int seconds;
	
	public:
	void accept_data()	{
		char x;
		cout<<"( Hr:Min:Sec format ): ";
		cin>>hour>>x>>minutes>>x>>seconds;
	}
	void display()	{
		cout<<hour<<":"<<minutes<<":"<<seconds<<endl;
	}
	void add_time(time x, time y)	{
		hour = x.hour + y.hour;
		minutes = x.minutes + y.minutes;
		seconds = x.seconds + y.seconds;
		if(seconds>=60)
			seconds -= 60, minutes += 1;
		if(minutes>=60)
			minutes -= 60, hour += 1;
	}
};

int main()	{
	time t1,t2,t3;
	cout<<"Enter Time 1 ";
	t1.accept_data();
	cout<<"Enter Time 2 ";
	t2.accept_data();
	
	//Add t1 and t2
	t3.add_time(t1, t2);
	//Dispaly time
	cout<<"***Display Time***"<<endl;
	cout<<"Time 1 : ", t1.display();
	cout<<"Time 2 : ", t2.display();
	cout<<"Time 3 : ", t3.display();
	
	return 0;
}
