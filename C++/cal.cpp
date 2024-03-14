#include<iostream>

using namespace std;

int main()
{
	int choice, a, b;
	cout<<"a and b"<<endl;
	cin>>a>>b;
	cout<<"1. +\n2. -\n3. *\n4. /\nEnter choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"Sum = "<<a+b;
			   	 break;
	    case 2 : cout<<"Diffference = "<<a-b;
	    	   	 break;
   	    case 3 : cout<<"Product = "<<a*b;
   	    	   	 break;
   	    case 4 : cout<<"Division = "<<a/b;
   	    	   	 break;
	    default: cout<<"Wrong Choice";
 		  		 break;
	} 
	return 0;
}
