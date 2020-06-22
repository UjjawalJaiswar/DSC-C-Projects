#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*link;
};

struct node* root=NULL;
int len;

void append(void);
void delete(void);
int length(void);
void display();

void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)//LIST IS EMPTY
	{
		root==temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
 int length()
 {
 	int count=0;
 	struct node* temp;
 	temp=root;
 	while(temp!=NULL)
 	{
 		count++;
 		temp=temp->link;
	}
	return count;
 }
 
 void display()
 {
 	struct node* temp;
 	temp=root;
 	if(temp==NULL)
 	{
 		printf("List is empty\n\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->link;
		}
		printf("\n\n");	
	}
 }
 
 void delete()
 {
 	struct node* temp;
 	int loc;
 	printf("Enter the location to delete:");
 	scanf("%d",&loc);
 	if(loc>length())
 	{
 		printf("Invalid LOCATION\n\n");
	}
 	else if (loc==1)
 	{
 		temp=root;
 		root=temp->link;
 		temp->link=NULL;
 		free(temp);
	}
	else
	{
		struct node* p=root,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
 }
 
 void main()
 {
 	int ch;
 	while(1)
 	{
 		printf("SINGLE LINKED LIST OPERATIONS: \n");
 		printf("1.Append\n");
 		printf("2.Delete\n");
 		printf("3.Length\n");
 		printf("4.Dispaly\n");
 		printf("5.Quit\n");
 		
 		printf("Enter your choice");
 		scanf("%d",&ch);
 		
 		switch(ch)
 		{
 			case 1: append();
 					break;
 					
 			case 2: delete();
 					break;
 			
 			case 3: len=length();
 					printf("Length:%d\n\n",len);
 					break;
 			
 			case 4: display();
 					break;
 			
 			case 5: exit(1);
 			default:printf("Invalid Input\n\n");
		 }
	 }
 }
