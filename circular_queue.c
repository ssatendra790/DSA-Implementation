#include<stdio.h>
#include<stdlib.h>

struct queue{
    int f;
    int r;
    int size;
    int *arr;
};
int isfull(struct queue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}

int isempty(struct queue *q){
   if(q->f==q->r){
       return 1;
   } 
   return 0;
}
void enqueue(struct queue *q,int val){
  if(isfull(q)){
      printf("Queue is FUll now..!!\n");
  }
  else{
      q->r=(q->r+1)%q->size;
      q->arr[q->r]=val;
      printf("%d enqueued in Queue.\n",val);
  }
}

int dequeue(struct queue *q){
    int val=-1;
    if(isempty(q)){
        printf("Queue is Empty.\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        val=q->arr[q->f];
    }
    return val;
}

int main(){
    struct queue *q;
    q->size=4;
    q->f=q->r=-1;

    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,12);  
    enqueue(q,6); 
    enqueue(q,42);
    enqueue(q,17);
     
    printf("Dequeuing element %d \n",dequeue(q));
    printf("Dequeuing element %d \n",dequeue(q));
    printf("Dequeuing element %d \n",dequeue(q));
    printf("Dequeuing element %d \n",dequeue(q));

    enqueue(q,67);
    enqueue(q,23);
    enqueue(q,10);

    printf("Dequeuing element %d \n",dequeue(q));
    


    return 0;
}