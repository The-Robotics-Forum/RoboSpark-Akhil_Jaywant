#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student_record 
{
    int roll_no;
    char name[30];
};

struct queue
{
    int roll_no[100];
    char name[30][100];
    int front ;
    int rear;
};

void init( struct queue* q )
{
    q->front=0;
    q->rear=0;
    
}



void enqueue(struct student_record *p , struct queue *q)
{
    q->roll_no[q->rear]=p->roll_no;
    strcpy(q->name[q->rear] , p->name);
    q->rear++;
}
 
int isEmpty(struct queue* q)
{
    return q->front==q->rear;
}

int main()
{
    int no_stud , i ;
    struct student_record *p ;
    struct queue *q;

    printf("\n Enter total number of students : ");
    scanf("%d" , &no_stud);

    p = (struct student_record *)malloc(no_stud*sizeof(struct student_record));
    q = (struct queue *)malloc(no_stud*sizeof(struct queue));
    init(q);

    for ( i=0 ; i<no_stud ; i++)
    {
        printf("\n Enter the details of student -  ");

        printf("\n Enter Roll No of the student : ");
        scanf("%d" , &(p+i)->roll_no);
        fflush(stdin);

        printf("\n Enter name of the student : ");
        gets((*(p+i)).name);
        fflush(stdin);

    } 

   
    for ( i=0 ; i<no_stud ; i++)
    {
        if( ((p+i)->roll_no) % 2 == 0) 
        {
            enqueue(p+i , q);
            
        }

    }
    if(isEmpty(q))
    {
        printf("\n No student with even roll number !");

    }
    else 
    {
        printf("\n The list of students with even roll no is :");
        for(int i=q->front;i<q->rear;i++)
        {
            
            printf("\nName : %s\tRoll No : %d ",q->name[i] , q->roll_no[i] );
            
        }
    }
    return 0;


}