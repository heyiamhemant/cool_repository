#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
int val;
struct Node* link;
}Node;
struct Node* createnode()
{
    Node* node;
    node=(Node*)malloc(sizeof(Node));
    node->link=NULL;
	return(node);
}
/*void delete_beg(int pos,int* head)
{
	Node* a;
	a=head;
	head=head->link;
	free(a);
}
void delete_mid(int pos,int* head)
{
	Node *a,*t;
	int c=0;
	a=head;
	while((a=a->link)!=NULL)
	{
		c++;
		if(c==pos-1)
		t=a->link->link;
		free(a->link);
		a->link=t;
			
	}
}
void delete_end(int pos,Node* head)
{
	Node *a;
	int c=0;
	a=head;
	while(a->link->link!=NULL);
	free(a->link);
	
}*/
void insert_beg(Node* head,int val)
{
	Node *new;
	new=createnode();
	new->val=val;
	new->link=head;
	head=new;
	
}/*
void insert_mid(int* head,int val,int pos)
{
	Node *a,*new;
	int c=0;
	a=head;
	while(a->link!=NULL){
		
		a=a->link;
		c++;
		if(c==pos-1)
		{
			new=createnode(val);
			new->link=a->link;
			a->link=new;
		}
	}
}*/
void traversal(Node *head)
{
	Node* a;
	a=head;
	while(a->link!=NULL){
		a=a->link;
		printf("value %d",a->val);
	}
	
}
int main()
{
	Node* head;
	head=createnode();
	insert_beg(head,5);
	insert_beg(head,6);
	insert_beg(head,7);
	insert_beg(head,8);
	traversal(head);
	printf("%d",head->val);

}