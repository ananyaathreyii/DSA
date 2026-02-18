#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct queue{
    struct node* front;
    struct node* rear;
};

void initqueue(struct queue* q){
    q->front = NULL;
    q->rear = NULL;
}

int isempty(struct queue* q){
    return (q->front == NULL);
}

void enqueue(struct queue* q, int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    
    if (newnode == NULL){
        printf("Heap overflow\n");
        return;
    }

    newnode->data = value;
    newnode->next = NULL;
    
    if(q->rear == NULL){
        q->front = q->rear = newnode;
        return;
    }

    q->rear->next = newnode;
    q->rear = newnode;
}

void dequeue(struct queue* q){
    if(isempty(q)){
        printf("Queue underflow\n");
        return;
    }

    struct node* temp = q->front;
    printf("Deleted element: %d\n", temp->data);

    q->front = q->front->next;

    if (q->front == NULL){
        q->rear = NULL;
    }

    free(temp);
}

void peek(struct queue *q){
    if(isempty(q)){
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", q->front->data);
}

void display(struct queue* q){
    if(isempty(q)){
        printf("Queue is empty\n");
        return;
    }

    struct node* temp = q->front;
    printf("Queue elements: ");

    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(){
    struct queue q;
    initqueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    display(&q);

    dequeue(&q);
    display(&q);

    peek(&q);

    return 0;
}
