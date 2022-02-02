#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int* arr;
};
int isFull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    else{
    return 0;
    }} 
int isEmpty(struct queue *q){
    if(q->rear==q->front){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("The queue is full.\n");
    }
    else{
        printf("%d enqueued.\n",val);
    q->rear++;
    q->arr[q->rear]=val;
    }
}
int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("The queue is Empty.\n");
    }
    else{
     q->front++;
     a= q->arr[q->front];
    }
    return a;
}
int main(){
    struct queue *q;
    q->size=5;
    q->front=q->rear=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    int val[q->size];
    printf("Enqueue %d elements in Queue.\n",q->size);
    for(int i=0;i<q->size;i++){
        scanf("%d",&val[i]);
    }
    for(int i=0;i<q->size;i++){
        enqueue(q,val[i]);
    }
      printf("Queue items :");
        while(!isEmpty(q)){ 
         printf("%d ",dequeue(q));
        }
    return 0;
}