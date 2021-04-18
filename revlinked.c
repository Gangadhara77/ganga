#include<stdio.h>
struct node
{
int data;
struct node *link;
};
struct node *first=NULL;
struct node *temp=NULL;
struct node *curr=NULL;
void create(int);
void display(void);
void main()
{
create(10);
create(20);
create(30);
display();
}
void create(int data)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
if(first==NULL)
{
first=temp;
}
else
{
curr=first;
while(curr->link!=NULL)
{
curr=curr->link;
}
}
}
void display()
{
curr=first;
while(curr!=NULL)
{
printf("\n%d\n",curr->data);
curr=curr->link;
}
}


