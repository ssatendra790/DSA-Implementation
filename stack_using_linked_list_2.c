#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node*  next;
}node;

struct node* top;  //making "top" a global variable to make changes in top in POP function wihtout derefercing and without giving address of top in main function. To look the difference checkout stack_using_linkedd_list program.

void lltraverse(struct node *ptr){
   while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int isfull(struct node* top){ 
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0; 
    }
}
struct node* push(struct node* top,int x){
    if(isfull(top)){
     printf("Stack overflow");
    }
    else{
      struct node* n= (struct node*)malloc(sizeof(struct node));
      n->data=x;
      n->next=top;
      top=n;
      return top; 
    }
}

int pop(struct node* tp){
    if(isempty(tp)){
        printf("Stack underflow.");
    }
    else{
        struct node* n =(tp);
        int x;
        top=(tp)->next;
        x=n->data;
        free(n);
        return x;
    }
}

int main(){
    struct node* top=NULL;
    int element,n,k; 
    
   printf("Enter no of elements you want to push in the linked list :\n");
   scanf("%d",&k);
   int c[k];

   for(int i=0;i<k;i++){
       printf("Push %d element in stack:\n",i+1);
       scanf("%d",&c[i]);
    top = push(top,c[i]);
    printf("\n\nElements in the stack are:\n\n");
    lltraverse(top); 
   }
     printf("Top element popped out below: \n\n");
    element=pop(top);
    printf("Popped element is :%d\n",element); 
    return 0;
}