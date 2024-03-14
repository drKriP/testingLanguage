,#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
struct node
{
	int info;
	struct node *llink;
	struct node *rlink;
};
typedef struct node *NODE;
NODE getnode()
{
	NODE x;
	x = (NODE)malloc(sizeof(struct node));
	if(x == NULL)
	{
		printf("Out of Memory.\n");
		exit(0);
	}
	return x;
}
NODE insert(int item, NODE root)
{
	NODE temp,cur,prev;
	temp = getnode();
	temp->info = item;
	temp->llink = NULL;
	temp->rlink = NULL;
	if(root == NULL)
		return temp;
	prev = NULL;
	cur = root;
	while(cur != NULL)
	{
		prev = cur;
		if(item < cur->info)
		        cur = cur->llink;
		else
		        cur = cur->rlink;	
	}
	if(item < prev->info)
	        prev->llink = temp;
	else
	        prev->rlink = temp;
	return root;
}
NODE search(int item, NODE root)
{
        if(root == NULL || item == root->info)
                return root;
        while(root != NULL)
        {
                if(item == root->info)
                        break;
                if(item < root->info)
                        root = root->llink;
                else
                        root = root->rlink;
        }
        if(root == NULL)
        {
                printf("NOT FOUND!\n");
                return root;
        }
        printf("Item Found");
        return root;
}
void display(NODE root, int level)
{
        int i;
        if(root == NULL)
                return;
        display(root->rlink,level+1);
        for(i=0;i<level;i++)
        printf(" ");
        printf("%d \n", root->info);
        display(root->llink,level+1);
}
void main()
{
		NODE root = NULL;
        int choice,item,flag;
        for(;;)
        {
                printf("1. Insert\n2, Search\n3. Display\n4. Exit\nEnter your choice : ");
                scanf("%d", &choice);
                switch(choice)
                {
                        case 1: printf("Enter Item\n");
                                scanf("%d", &item);
                                root = insert(item,root);
                                break;
                                
                        case 2: if(root == NULL)
                                        printf("Empty\n");
                                else
                                        printf("Enter item to be search : ");
                                        scanf("%d", &item);
                                        search(item,root);
                                        break;
                                        
                        case 3: if(root == NULL)
                                        printf("Empty\n");
                                else
                                {
                                        printf("The tree is :\n");
                                        display(root,1);
                                }
                                break;
                                
                        case 4: exit(0);
                        
                        default: printf("Wrong Choice");
                }
        }
}



































