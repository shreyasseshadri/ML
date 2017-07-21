#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node * head;
int insert(int d,int n)
{
  struct node* temp1=(struct node*)malloc(sizeof(struct node*));
  temp1->data=d;
  temp1->next=NULL;
  if(n==1)
  {
  temp1->next=head;
  head=temp1;
  }
   
  else
  {struct node* temp2=head;
  for(int i=0;i<n-2;i++)temp2=temp2->next;
  temp1->next=temp2->next;
  temp2->next=temp1;
  }
}
void print()
{
struct node* temp=head;
while(temp!=NULL)
{
temp=temp->next;
printf("%d ",temp->data);
}
}
int main()
{
 head=NULL;
 insert(2,1);
 insert(3,2);
 insert(4,3);
//print();
}
