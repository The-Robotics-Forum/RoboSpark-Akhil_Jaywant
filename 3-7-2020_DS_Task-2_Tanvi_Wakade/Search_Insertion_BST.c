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

struct node* search(struct node* root, int data) 
{ 
    
     if ((root == NULL) || (root->data == data)) 
        return root; 
    
     if (root->data < data) 
        return search(root->right, data); 
  
     return search(root->left, data); 
} 

struct node* insert_ele(struct node* node, int insertion_data) 
{ 
    
    if (node == NULL) 
    {
        return create_node(insertion_data); 
    }

    if (insertion_data < node->data) 
    {
        node->left  = insert_ele(node->left, insertion_data); 
    }

    else if (insertion_data > node->data) 
    {
        node->right = insert_ele(node->right, insertion_data);    
    }

    return node; 
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

    int s,x;
    struct node *add;
    struct node *n10=create_node(10);
    struct node *n8=create_node(8);
    struct node *n12=create_node(12);
    struct node *n6=create_node(6);
    struct node *n9=create_node(9);
    struct node *n11=create_node(11);
    struct node *n13=create_node(13);
    

    n10->left=n8;
    n10->right=n12;  
    n8->left=n6;
    n8->right=n9;
    n12->left=n11;
    n12->right=n13;

    printf("\n Postorder Traversal of the tree before insertion is : ");
    postorder(n10);

    
    insert_ele(n10,5);
    printf("\n Postorder Traversal of the tree after  inserting 5 is : ");
    postorder(n10);
    printf("\n");

    insert_ele(n10,19);
    printf("\n Postorder Traversal of the tree after  inserting 19 is : ");
    postorder(n10);
    printf("\n");

    insert_ele(n10,7);
    printf("\n Postorder Traversal of the tree after  inserting 7 is : ");
    postorder(n10);
    printf("\n");


    printf("\n Enter the data element to be inserteded in the tree : ");
    scanf("%d" , &x);
    insert_ele(n10,x);
    printf("\n Postorder Traversal of the tree after  inserting %d is : " , x);
    postorder(n10);
    printf("\n");


    printf("\n Enter the data element to be searched in the tree : ");
    scanf("%d" , &s);
    add=search(n10,s);
    if(add==NULL) 
    {
        printf("\n The data item is not present in the tree!");
    }
    else 
    {
        printf("\n The data item is present in the tree ");
    }
    return 0;
}