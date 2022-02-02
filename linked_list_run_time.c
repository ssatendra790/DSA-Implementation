#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}node;
int main(){
    struct node *p,*head;
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);

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
        p->next=NULL;
    }
    p=head;
    printf("\nLinked List: ");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }

    return 0;
}