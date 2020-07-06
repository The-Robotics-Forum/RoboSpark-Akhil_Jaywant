#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print(struct node *temp)
{
    while(temp->next!=NULL)
    {
        printf(" %d -> ", temp->data);
        temp = temp->next;
    }
    printf(" %d -> NULL \n", temp->data);

}

struct node* insert_element(struct node *head , int position , int data_ele)
{
    struct node *temp=head;
    if(position == 1)                        // insertion at begining
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data=data_ele;
        new_node->next=head;
        head=new_node;
        
        return head;
       
    }

    else 
    {
        for (int i=2 ; i<position ; i++)
        {
            temp=temp->next;                //traversing to the required position
        }

        if(temp->next==NULL)                //insertion at the end
        {
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data=data_ele;
            new_node->next=NULL;
            temp->next=new_node;
            
            return head;
        }
        else 
        {                                   //insertion at middle of list

            struct node *temp_next=temp->next;
            // printf("\n %d " , temp_next->data);
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data=data_ele;
            new_node->next=temp_next;
            temp->next =new_node;

            return head;
        }

    }
}


struct node* delete_element(struct node *head , int position)
{
    int i=1;
    struct node *curr=head , *prev=NULL;
    if(position==1)
    {
        head=head->next;
        curr->next=NULL;
        free (curr);

    }

    else
    {
        while(i != position)
        {
            prev=curr;
            curr = curr->next;
            i++;
        }

        prev->next=curr->next;
        curr->next=NULL;

        free(curr);
    }

    return head;
    
}


int main()
{
    int data , in_position , no_ele , del_position;
    struct node  *temp ,*head=NULL,*p,*prev=NULL;

    printf("\n Enter the number of elements in the list : ");
    scanf("%d" , &no_ele);
    printf(" Enter the elements in the list : ");
    for(int i=0; i<no_ele; i++)
    {
        p= (struct node*)malloc(sizeof(struct node));
        scanf("%d",&(p->data));
        p->next = NULL;
        if(head==NULL)
            head=p;
        else
        {
            prev->next=p;
        }
        prev = p;
    }

    
    printf("\n The link list before inserting an element : ");
    print(head);

    printf("\n Enter the element to be inserted and its position ( %d is at position 1 ) : " , head->data);
    scanf("%d  %d" , &data , &in_position);
   
    
    head=insert_element(head , in_position , data);
    printf("\n The link list after inserting an element : ");
    print(head);

    
    printf("\n Enter the position of element to be deleted ( %d is at position 1 ) : " , head->data);
    scanf("%d" , &del_position);
    head=delete_element(head , del_position);
    printf("\n The link list after deleting an element : ");
    print(head);
    
    return 0;
}