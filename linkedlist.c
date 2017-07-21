#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
struct node* head;

int insert(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
//    printf("hello\n");
    return 0;  
}
void print(int n)
{
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  temp=head;int i=0;
//  printf("hi\n";
  while(i<=n-1)
  { //printf("sh");
  temp = temp->next;
  printf("%d ",temp->data);i++;
  }

}
int main()
{
   head=NULL;
   int n,i,x;
   printf("how many \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&x);
     insert(x);
     printf("List : \n");
     print(n);
   }

}
