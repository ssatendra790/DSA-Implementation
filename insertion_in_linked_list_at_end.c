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
printf("enter elements of linked list: ");
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

node *insEnd(){
struct node *ptr,*y,*m,*h;
y=create();
h=y;
printf("Enter number you want to insert at the end of the linked list :");
ptr=(node*)malloc(sizeof(node));
scanf("%d",&ptr->data);
while(y!=NULL){
   m=y;
   y=y->next;
}
m->next=ptr;
ptr->next =NULL;
return(h);
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
x=insEnd();
display(x); 
return 0;
}