#include<iostream>

using namespace std;

class NODE	{
	public:
	int info;
	NODE *link;
};

class linked_list	{
	NODE *head, *tail;
	public:
	Linked_List()	{
		head = NULL;
		tail = NULL;
	}
	void insertFront();
	void insertRear();
	void deleteFront();
	void deleteRear();
	void display();
};

void linked_list::insertFront()	{
	NODE *temp = new NODE;
	int item;
	cout<<"Enter Value : ";
	cin>>item;
	temp->info = item;
	temp->link = NULL;
	if(head == NULL)	{
		head = temp;
		tail = temp;
	}
	else	{
		temp->link = head;
		head = temp;
	}
}
void linked_list::insertRear()	{
	NODE *temp = new NODE;
	int item;
	cout<<"Enter Value : ";
	cin>>item;
	temp->info = item;
	temp->link = NULL;
	if(head == NULL)	{
		head = temp;
		tail = temp;
	}
	else	{
		tail->link = temp;
		tail = tail->link;
	}
}
void linked_list::deleteFront()	{
	if(head == NULL)	{
		cout<<endl<<"Linked List is Empty\n";
	}
	else{
		cout<<endl<<"Item Deleted = "<<head->info;
		head = head->link;
	}
}
void linked_list::deleteRear()	{
	NODE *temp = new NODE, *prev = new NODE;
	if(head == NULL)	{
		cout<<endl<<"Linked List is empty\n";
	}
	else	{
		temp = head;
		while(temp->link != NULL)	{
			prev = temp;
			temp = temp->link;
		}
		if(temp == head)	{
			cout<<endl<<"Item Deleted = "<<head->info;
			head = NULL;
			tail = NULL;
		}
		else	{
			cout<<endl<<"Item Deleted = "<<tail->info;
			tail = prev;
			tail->link = NULL;
		}
	}
}
void linked_list::display(){
	NODE *temp = new NODE;
	temp = head;
	if(head == NULL)	{
		cout<<"\nLinked List is empty\n";
	}
	while(temp != NULL)	{
		cout<<endl<<temp->info<<endl;
		temp = temp->link;
	}
}

int main()	{
	linked_list a;
	char choice;
	for(;;)	{
		cout<<endl<<"***LINKED LIST***"<<endl;
		cout<<"1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\nEnter your choice : ";
		cin>>choice;
		switch(choice)	{
			case '1' :	a.insertFront();
		 		 	 	break;
			case '2' :	a.insertRear();
				 	 	break;
			case '3' :	a.deleteFront();
				 	 	break;
			case '4' :	a.deleteRear();
				 	 	break;
			case '5' :	a.display();
				 	 	break;
			default  :	cout<<"\nWRONG CHOICE\n";
					 	break;
		}
	}
 	return 0;
}
