#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Queue{
    int roll[10];
    char name[10][10];
    int front,rear;
}Queue;

void initialize(Queue* q){
    
    q->front=0;
    q->rear=0;
}

void enqueue(Queue* q,char *c,int len,int rol){
    
    if(rol % 2 ==0){
        for(int i =0;i <= len;i++){
            q->name[q->rear][i]=c[i];
        }
        q->roll[q->rear++]=rol;
        
    }
}
int dequeue(Queue* q){
    return q->name[q->front++];
}

int isEmpty(Queue* q){
    return q->front==q->rear;
}

void print(Queue* q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return ;
    }
    printf("The students having even roll nos are \n");
    for(int i=q->front;i<q->rear;i++){
        printf(" %s - %d \n",q->name[i],q->roll[i]);
    }
}
int main(){
    Queue* q1=(Queue*)malloc(sizeof(Queue));
    initialize(q1);

    enqueue(q1,"aditya",strlen("aditya"),4);
    enqueue(q1,"rahul",strlen("rahul"),1);
    enqueue(q1,"chetan",strlen("chetan"),6);
    enqueue(q1,"rohit",strlen("rohit"),5);
    enqueue(q1,"aadesh",strlen("aadesh"),8);
  
    print(q1);
  
}