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

node *delete(){
struct node *ptr,*y,*m,*h;
int pos;
y=create();
h=y;
printf("Enter location which you want to delete: ");
scanf("%d",&pos);
if(pos==1){
    m=h->next;
    y=m;
}
else{
for(int i=0;i<pos-2;i++){
    h=h->next;
}
m=h->next->next;
h->next=m;
return(y);

}
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
x=delete();
display(x); 
return 0;
}