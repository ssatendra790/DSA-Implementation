#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node *g;
node *create(){
int n;
struct node *p,*head,*ptr;
printf("Enter no of elements in linked list : ");
scanf("%d",&n);
printf("Enter elements of linked list : ");
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
g=head;
return(head);
}
node *insLoc(){
struct node *ptr,*y,*m,*h;
int pos;
y=create();
h=y;
printf("Enter NUMBER you want to INSERT in the linked list :\n");
ptr=(node*)malloc(sizeof(node));
scanf("%d",&ptr->data);
printf("Enter location where you want to insert your number: \n");
scanf("%d",&pos);

if(pos==1){
    ptr->next=h;
    return ptr;
}
else{
for(int i=0;i<pos-2;i++){
h=h->next;
}
m=h->next;
h->next=ptr;
ptr->next=m;
return(y);
}}
node *delete(){
struct node *ptr,*y,*m,*h;
int pos;
// y=create();
y=g;
h=y;
printf("Enter location which you want to delete : \n");
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
}}
void display(node *head){
node *p;
p=head;
printf("Resulting linked list: ");
while(p!=NULL){
printf("%d ",p->data);
p=p->next;
}
printf("\n");
}
int main(){
node *x,*m;
x=insLoc();
display(x); 
m=delete();
display(m);
return 0;
}