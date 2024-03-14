#include<iostream>

using namespace std;

class Int	{
	int a;
	public:
		Int()	{a = 0;}
		Int(int x)	{a = x;}
		Int operator ++()		{return Int(++a);}
		Int operator ++(int)	{return Int(a++);}
		Int operator --()		{return Int(--a);}
		Int operator --(int)	{return Int(a--);}
		void display()	{
			 cout<<"a = "<<a<<endl;
		}
};

int main()	{
	Int q,w;
	w = ++q, w.display();
	w = q++, w.display();
	w = ++q, w.display();
	cout<<"-------"<<endl;
	w = --q, w.display();
	w = q--, w.display();
	w = --q, w.display();
	return 0;
}

