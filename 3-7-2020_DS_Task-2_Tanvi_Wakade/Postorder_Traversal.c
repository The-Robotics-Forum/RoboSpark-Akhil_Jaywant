#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *left , *right;
};

struct node * create_node(int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->data=data;
}

void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    printf("  %d  ",root->data);

}

int main()
{
    struct node *n1=create_node(1);
    struct node *n2=create_node(2);
    struct node *n3=create_node(3);
    struct node *n4=create_node(4);
    struct node *n5=create_node(5);
    struct node *n6=create_node(6);
    struct node *n7=create_node(7);
    

    n1->left=n2;
    n1->right=n3;  
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=n7;


    printf("\n The PostOrder Traversal : \n");
    postorder(n1);

    return 0;
}