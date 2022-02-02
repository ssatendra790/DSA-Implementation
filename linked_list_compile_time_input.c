#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}node;

int main(){
    struct node *p,*q,*r,*head;

    head=(struct node*)malloc(sizeof(struct node));

    head -> data=2;
    head->next = NULL;
    p=head;

    q=(struct node*)malloc(sizeof(struct node));
    q->data=5;
    q->next=NULL;

    r=(struct node*)malloc(sizeof(struct node));
    r->data=9;
    r->next=NULL;

    p->next =q;
    q->next=r;

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}