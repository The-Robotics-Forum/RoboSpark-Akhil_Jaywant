#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node * addition(int value,struct node *head){
    struct node *temp= (struct node *)malloc(sizeof(struct node));
    struct node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=temp;
    temp->data=value;
    temp->next=NULL;
    return temp;
}
void delete(struct node *head,struct node *current){

    struct node *temp=head;
    while(temp->next != current){
        temp=temp->next;
    }
    temp->next=current->next;
    current->next= NULL;
    free(current);

}
void show(struct node *head){
    struct node *temp=head;
    while(temp->next!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("%d -> NULL \n",temp->data );
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;

    struct node *second=addition(2,head);
    struct node *third=addition(3,head);
    struct node *fourth=addition(4,head);

    show(head);
    delete(head,third);
    show(head);
    struct node *fifth=addition(5,head);
    show(head);
    delete(head,fifth);
    show(head);

}