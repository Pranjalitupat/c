#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next,*prev;
}Node;

Node * create(int n){
    Node *head,*temp;
    head=temp=(Node*)malloc(sizeof(Node));
    scanf("%d",&temp->data);
    temp->prev=NULL;
    for(int i=1;i<n;i++){
        temp->next=(Node*)malloc(sizeof(Node));
        temp->next->prev=temp;
        temp=temp->next;
        scanf("%d",&temp->data);
    }
    temp->next=NULL;
    return head;
}

void display(Node*head){
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}

void reverse(Node*head){
    while (head ->next!=NULL)
    {
        head = head->next;
    }
    while (head ->next=NULL)
    {
        printf("\n%d",head->data);
        head=head->prev;
    }
    
    
}
void main ()
{
    Node*head=NULL;
    int n;
    printf("enter a n");
    scanf("%d",&n);
    head = create(n);
    printf("\n given data is");
    display(head);
    reverse(head);
    return ;
}