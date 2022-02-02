#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node*  next;
}node;

void lltraverse(struct node *ptr){
    while(ptr!=NULL){
        printf("Element %d\n",ptr->data);
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

int pop(struct node** top){
    if(isempty(*top)){
        printf("Stack underflow.");
    }
    else{
        struct node* n =(*top);
        int x;
        (*top)=(*top)->next;
        x=n->data;
        free(n);
        return x;
    }
}

int main(){
    struct node* top=NULL;
    int element;
    top = push(top,78);
    top = push(top,10);
    top = push(top,12);
    
    lltraverse(top);
    element=pop(&top);
    printf("Popped element is :%d\n",element); 
    return 0;
}