#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
struct node
{
	int info;
	struct node *llink;
	struct node *rlink;
};
struct node* getnode()
{
	struct node *x;
	x = (struct node*)malloc(sizeof(struct node));
	if(x == NULL)
	{
		printf("Out of Memory.\n");
		exit(0);
	}
	return x;
}


