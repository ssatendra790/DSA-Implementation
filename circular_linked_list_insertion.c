#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;


node *create(){
    struct node *head,*p;
    int n,c;
    printf("Enter no. of elements in linked list:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
        head=(struct node*)malloc(sizeof(struct node));
        p=head;
        }
        else{
            p->next = (struct node*)malloc(sizeof(struct node));
            p=p->next;
        }
        scanf("%d",&p->data);
        p->next=head;
        }
        p=head;
        return(p);
}
struct node *insBeg(){
    struct node *ptr,*y,*p,*last;
    y=create();
    p=y;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value you want to enter in beginning of the linked list");
        scanf("%d",&ptr->data);
       
            p=p->next;
        while(p->next!=y){
            p=p->next;
        }
        last=p;
        ptr->next=last->next;
        last->next=ptr;
        y=ptr;
        
}
void display(node *head){
    node *p;
    p=head; 
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
}

int main(){
    struct node *x;
    x=insBeg();
    display(x);
    return 0;
}