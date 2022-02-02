//Circular linked list without using functions.

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}node;
int main(){
    struct node *p,*head;
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter elements in linked list: ");
    for(int i=0;i<n;i++){
        if(i==0){
            head=(struct node*)malloc(sizeof(struct node));
            p=head;
          
        }
        else{
     p->next=(struct node*)malloc(sizeof(struct node));
     p=p->next;
        }
        scanf("%d",&p->data);
        p->next=head; 
    }
    p=head;
    printf("Linked List: ");
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
    return 0;
}