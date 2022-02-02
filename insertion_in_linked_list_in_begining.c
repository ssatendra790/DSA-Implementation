#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}node;

node *create(){
int n;
struct node *p,*head,*ptr;
printf("Enter no of elements: ");
scanf("%d",&n);
printf("Enter elements of linked list: ");
for(int i=0;i<n;i++){
if(i==0){
head=(node*)malloc(sizeof(node));
p=head;
}
else{
p -> next = (struct node*)malloc(sizeof(struct node));
p=p->next;
}
scanf("%d",&p->data);
}
p->next=NULL;
return(head);
}

node *insBeg(){
struct node *ptr,*y;
y=create();
printf("Enter number you want to insert in the linked list :");
ptr=(node*)malloc(sizeof(node));
scanf("%d",&ptr->data);
ptr->next=y;
y=ptr;
return(y);
}
void display(node *head){
node *p;
p=head;
printf("linked list: ");
while(p!=NULL){
printf("%d ",p->data);
p=p->next;
}
}

int main(){
node *x;
x=insBeg();
display(x);
return 0;
}