#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack* ptr){
  if(ptr->top==-1){
      return 1;
  }  
  else{
      return 0;
  }
}

int isFull(struct stack* ptr){
  if(ptr->top==ptr->size-1){
      return 1;
  }
  else{
      return 0;
  }
}

void push(struct stack *sp,int val){
    if(isFull(sp)){
         printf("Stack overflow.\n");
     }
     else{
         printf("%d pushed in the stack.\n",val);
      sp->top++;
      sp->arr[sp->top]=val;
     }
}
void pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("Stack is Empty.\n");
    }
    else{
        int count=sp->arr[sp->top];
        sp->top--;
        printf("Popped element is %d. \n",count);
    }
}
int main(){
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
     push(s,12);
     push(s,14);
     push(s,16);
     push(s,18);
     
     pop(s);
     pop(s);
     pop(s);
     pop(s);
    return 0;
}