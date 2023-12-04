#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void insertend(struct node **head,int data)
{
    struct node *nn=(struct node*)malloc(sizeof(struct node));
   nn->data=data;
    nn->link=NULL;
    if(*head==NULL)
    {
        *head=nn;

    }
    else
    {
        struct node *temp= *head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=nn;
    }
}
void insertatpos(struct node *head,int loc,int data)
{
    struct node *nn=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    int count=0;
    nn->data=data;
    nn->link=NULL;
    if(count!=loc)
    {
        temp=temp->link;
        count++;
    }
    nn->link=temp->link;
    temp->link=nn;
          }

void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
    printf("%d ",temp->data);
    temp=temp->link;
    }
}
int main()
{
    struct node *head=NULL;
    int data,n,loc,p;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("ENTER DATA:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&data);
    insertend(&head,data);
    }
    display(head);
    printf("\nENTER THE POSITION AND DATA:");
    scanf("%d %d",&p,&data);
    insertatpos(head,p,data);
    display(head);

    return 0;
}

