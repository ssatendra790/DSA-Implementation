#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *f =NULL;
struct node *r =NULL;
void lltraversle(struct node *ptr){
     printf("Elements in the queue : ");
     while(ptr!=NULL){
         printf("%d ",ptr->data);
         ptr=ptr->next;
     }
}
void enque(int val ){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("Queue is full.\n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}
int deque(){
    struct node *ptr = f;
    int val=-1;
    if(f==NULL){
        printf("Queue is Empty.\n");
    }
    else{
     f=f->next;
     val=ptr->data; 
     free(ptr);
    }
    return val;
}
int main(){
    enque(12);
    enque(13);
    enque(14);
    printf("%d ",deque());
    printf("%d ",deque());
    lltraversle(f);
    return 0;
}