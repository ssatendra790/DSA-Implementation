#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *create(){
    struct node *p,*head;
    int n;
    printf("Number of elements in linked list :");
    scanf("%d",&n);
    
    printf("Enter value of elements: ");
    for(int i=0;i<n;i++){
        if(i==0){
            head =(node*)malloc(sizeof(struct node));
            p=head;
        }
        else{
            p->next=(node*)malloc(sizeof(struct node));
            p=p->next;
        }
        scanf("%d",&p->data);
        p->next=NULL;
    }
    return(head);
}
void display(struct node *head){
    struct node *p;
    p=head;
    printf("Linked List: ");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    struct node *x;
    x =create();
    display(x);
    return 0;
}