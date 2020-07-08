

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insert(int n,int value,struct node *head){
    struct node *temp3=(struct node *)malloc(sizeof(struct node));
    temp3->data=value;
    struct node *temp2=head;
     for(int i=0;i<n-2;i++) {
         temp2=temp2->next;}
    temp3->next=temp2->next;
    temp2->next=temp3;
       
}
    

void del(int n,struct node *head){
    struct node *temp1;
    temp1=head;
    int i;
    for(i=0;i<n-2;i++)             //assuming n=3
    {temp1=temp1->next;}          //storing address of node2 in temp1
    struct node *temp2=temp1->next;  //storing address of node being removed in temp
    temp1->next=temp2->next; //storing 2nd node's next as address of 4th node
    
    
    }
void display(struct node *head){
   struct node *temp;
   temp=head;
   while(temp->next!=NULL){
       printf("%d->",temp->data);
       temp=temp->next;}
           printf("%d->NULL",temp->data);
            
    }
int main()
{   struct node *head; 
    head=(struct node *)malloc(sizeof(struct node));
    head->data=100;
    head->next=NULL;
    
    
    struct node *node2;
    node2=(struct node *)malloc(sizeof(struct node));
    node2->data=200;
    node2->next=NULL;
    
    struct node *node3;
    node3=(struct node *)malloc(sizeof(struct node));
    node3->data=300;
    node3->next=NULL;
    
    struct node *node4;
    node4=(struct node *)malloc(sizeof(struct node));
    node4->data=400;
    node4->next=NULL;
   
   head->next=node2;
   node2->next=node3;
   node3->next=node4;
   int k=3;
   insert(3,16,head);
   display(head);
  

       return 0;
}
