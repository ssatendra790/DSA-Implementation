#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
 
 void *create(){
     struct node *head,*p;
     int n;
     printf("Enter the number of elements in linked list :");
     scanf("%d",&n);
     for(int i=0;i<n;i++){
         if(i==0){
             head = (struct node*)malloc(sizeof(struct node));
             p=head;
         }
         else{
             p->next = (struct node*)malloc(sizeof(struct node));
             p=p->next;
         }
         scanf("%d",&p->data);
         p -> next=head;
         }
     p=head;
     return(p);
 }
 void display(node *head){
   node *p;
   p=head;
   printf("Linked List: ");
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
 }
int main(){
    node *x;
    x=create();
    display(x);
    return 0;
}